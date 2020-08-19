# Rust-Interoperability-Ceedling
An example of rust being called by the ceedling testing framework. At a high level, the rust code is simply acting as a library. There is a simple script that will recompile the rust library and produce the equivalent c headers whenever a ceedling build is invoked.

# Requirements to reproduce
- [Docker](https://docs.docker.com/engine/install/)
- [VSCode](https://code.visualstudio.com/)
- VSCode extention: [Remote - Containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)

The remaining instructions will assume you have these requirements correctly installed.

# Setup

1. Open VSCode.

2. Open the repository within a remote container by selecting the green `><` icon in the bottom left corner and select `Remote-Containers: Reopen in Container`. ![remote container](images/open_remote_container.png)

3. Select the directory containing the `Dockerfile` of this repository. VSCode should reopen and begin building the docker image for the environment. This can take up to 5 minutes the first time.

Congratulations. You should now have a fully functional environment.

# Running ceedling unit tests
Simply navigate to the 