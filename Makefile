CCFLAGS=-Wall -Wextra -std=c++98 -pedantic

all:
	g++ $(CCFLAGS) *.cpp -o bcdc
