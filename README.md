
XIOS development tree

XIOS is a PoS-based cryptocurrency.

XIOS is dependent upon libsecp256k1 by sipa, the sources for which can be found here:
https://github.com/bitcoin/secp256k1

Total POW: forever
POW Reward: dynamicaly XIOS per Block
POS Reward: 1 XIOS (HiPOS)
Block Spacing: 60 Seconds
Diff Retarget: 4 Blocks
Maturity: 30 Blocks
Stake Minimum Age: 1 Hours

40 MegaByte Maximum Block Size (40X Bitcoin Core)

Port: 37191
RPC Port: 37192

Magic Bytes: 0x1a 0x2e 0xb5 0x3c

XIOS includes an Address Index feature, based on the address index API (searchrawtransactions RPC command) implemented in Bitcoin Core but modified implementation to work with the XIOS codebase (PoS coins maintain a txindex by default for instance).

Initialize the Address Index By Running with -reindexaddr Command Line Argument.  It may take 10-15 minutes to build the initial index.


