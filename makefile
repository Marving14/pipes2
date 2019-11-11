CC = g++
OBJS = main.o WordShuffler.o SortList.o

all: pipes2

pipes2: $(OBJS)
	$(CC) $(OBJS) -o pipes2

main.o:
	$(CC) -c main.cpp

SortList.o:
	$(CC) -c ./src/SortList.cpp

WordShuffler.o:
	$(CC) -c ./src/WordShuffler.cpp

clean:
	rm -f *~ *.o pipes2
