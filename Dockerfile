# Using Officail Ubuntu Image
FROM rust:1.45.2

# Making sure packages are up to date.
RUN apt-get update

# Installing ruby for ceedling
RUN apt-get install -y ruby=1:2.5.1
RUN gem install ceedling

# Setting the user to non-root privlages
RUN useradd --create-home --shell /bin/bash rustacean
USER rustacean
WORKDIR /workspaces/rust-interoperability

# Installing cbindgen to create c headers from rust
RUN cargo install cbindgen
