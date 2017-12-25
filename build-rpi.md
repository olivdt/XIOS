## install the needed tools for Ubuntu 16.10

sudo apt install build-essential libtool autotools-dev autoconf pkg-config curl g++-arm-linux-gnueabihf

## these are the shell commands:
cd depends

make HOST=arm-linux-gnueabihf NO_QT=1

cd ../src

make -f makefile.arm DEPSPATH=$(pwd | sed 's/src/depends/')
