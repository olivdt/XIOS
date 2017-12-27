## install the needed tools for Ubuntu 16.10 or Debian 9

sudo apt install build-essential libtool autotools-dev autoconf pkg-config curl

## these are the shell commands:

git submodule init

git submodule update

cd depends

make NO_QT=1

cd ../src

make -f makefile.static.linux DEPSPATH=$(pwd | sed 's/src/depends/')/x86_64-unknown-linux-gnu
