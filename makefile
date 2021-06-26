OBJS	= main.o functions.o
SOURCE	= main.cpp functions.cpp
HEADER	= header.h
OUT	= proj3
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

functions.o: functions.cpp
	$(CC) $(FLAGS) functions.cpp


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
