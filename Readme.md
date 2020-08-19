# Rust-Interoperability-Ceedling
An example of rust being called by the ceedling testing framework. At a high level, the rust code is simply acting as a library. There is a simple script that will recompile the rust library and produce the equivalent c headers whenever a ceedling build is invoked.

# Requirements to reproduce
- [Docker](https://docs.docker.com/engine/install/)
- [VSCode](https://code.visualstudio.com/)
- VSCode extention: [Remote - Containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)

The remaining instructions will assume you have these requirements correctly installed.

# 