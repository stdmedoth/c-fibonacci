CC=gcc
TARGET_FILE=fibonacci.c
RESULT_FILE=fibonacci
OBJS=fibonacci.o

all: $(OBJS)
	$(CC) $(OBJS) -o $(RESULT_FILE)

fibonacci.o:
	$(CC) $(TARGET_FILE) -c

clear:
	rm *.o *.gcda -rf $(RESULT_FILE)

recompile_all: clear all
