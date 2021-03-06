#~/user/bin/make -f
EXECUTABLE = bin/fid
SO_LIBRARY = bin/fid.so

CC        = gcc
CXX       = g++
CFLAGS    = -fPIC -Wno-enum-conversion -O3
CXXFLAGS  = -fPIC -std=c++14 -O3 -Wfatal-errors -Werror
LDFLAGS   = -pthread

SRC_ZLIB  = $(wildcard ziplib/Source/ZipLib/extlibs/zlib/*.c)
SRC_LZMA  = $(wildcard ziplib/Source/ZipLib/extlibs/lzma/unix/*.c)
SRC_BZIP2 = $(wildcard ziplib/Source/ZipLib/extlibs/bzip2/*.c)
SRC_ZIPLIB = \
		$(wildcard ziplib/Source/ZipLib/*.cpp)        \
		$(wildcard ziplib/Source/ZipLib/detail/*.cpp)



SRC_FILEID = \
	fileid/fileid.cpp	


# Object files			
OBJS = \
		$(SRC_FILEID:.cpp=.o) \
		$(SRC_ZIPLIB:.cpp=.o) \
		$(SRC_ZLIB:.c=.o) \
		$(SRC_LZMA:.c=.o) \
		$(SRC_BZIP2:.c=.o)

# Rules
all: $(EXECUTABLE) $(SO_LIBRARY)

$(EXECUTABLE): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(CPP_FILES) -o $@ $^

$(SO_LIBRARY): $(OBJS)
	$(CXX) $(LDFLAGS) -shared -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf `find Source -name '*.o'` $(EXECUTABLE) $(SO_LIBRARY)


BINDIR ?= ${PREFIX}/bin

install:
	@cp -p bin/fid ${PREFIX}/bin/fileid