## install the needed tools for Ubuntu 16.10 or Debian 9

sudo apt install build-essential libtool autotools-dev autoconf pkg-config curl g++-arm-linux-gnueabihf

## these are the shell commands:

git submodule init

git submodule update

cd depends

make HOST=arm-linux-gnueabihf NO_QT=1

cd ../src

make -f makefile.arm DEPSPATH=$(pwd | sed 's/src/depends/')
