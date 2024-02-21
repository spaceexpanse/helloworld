timeout 2  >NUL  2>NUL
START /B C:/Progra~1/SpaceXpanse/daemon/spacexpansed -testnet -rpcuser=user1 -rpcpassword=pass1 -wallet=test -server=1 -listen=1 -rpcallowip=127.0.0.1 -rpcport=18399 -zmqpubhashtx=tcp://127.0.0.1:28332 -zmqpubhashblock=tcp://127.0.0.1:28332 -zmqpubrawblock=tcp://127.0.0.1:28332 -zmqpubrawtx=tcp://127.0.0.1:28332 -zmqpubgameblocks=tcp://127.0.0.1:28332 -datadir=F:/Cache/SpaceXpanse >NUL 2>NUL
timeout 20
C:/Progra~1/SpaceXpanse/daemon/spacexpanse-cli -testnet -rpcuser=user1 -rpcpassword=pass1 -rpcport=18399 getblockchaininfo
pause
hello.exe --spacexpanse_rpc_url="http://user1:pass1@127.0.0.1:18399" --game_rpc_port=29001 --storage_type=memory --datadir=C:/Temp/libspex

taskkill /F /IM spacexpansed.exe
