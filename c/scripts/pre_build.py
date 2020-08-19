#!/usr/bin/python3.7
# Prebuild task for ceedling.
# Since the ceedling build depends on libraries from rust,
# we should recompile them and make sure they are up to date
# before trying to compile the ceedling part of the application.
import os
from os.path import dirname, abspath
import sys

current_file_dir = dirname(abspath(__file__))
c_src_dir = current_file_dir + "/../src/"
cargo_toml_dir = current_file_dir + "/../../rust"

os.chdir(cargo_toml_dir)

# Compile the library
cargo_status_code = os.system("cargo build")

if cargo_status_code != 0:
    sys.exit(os.WEXITSTATUS(cargo_status_code))

# Generate the bindings for the libray if there was successful compilation
os.system("cbindgen --output " + c_src_dir + "rust-generated.h")

