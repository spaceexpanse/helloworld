CC=g++
CFLAGS=-Wall -Werror -Wno-deprecated -Wno-deprecated-declarations -pedantic -std=c++14 -DGLOG_NO_ABBREVIATED_SEVERITIES
LDFLAGS=-pthread -lstdc++fs
PACKAGES=libspex jsoncpp libglog gflags libzmq openssl

hello: hello.cpp
	$(CC) -o $@ $< $(CFLAGS) $(shell pkg-config --cflags $(PACKAGES)) $(shell pkg-config --libs $(PACKAGES)) $(LDFLAGS)

clean:
	rm -f hello