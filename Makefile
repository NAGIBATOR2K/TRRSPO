CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGET = maxfinder

all: $(TARGET)

$(TARGET): main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o $(TARGET)

check:
	@which gcc > /dev/null || (echo "gcc не установлен!" && exit 1)