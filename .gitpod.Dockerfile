FROM gitpod/workspace-full

# Install custom tools, runtime, etc.
RUN sudo apt-get install -y valgrind
