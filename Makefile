CC = gcc
CFLAG = -Wall -Werror
TARGET = lib/sloth

all: $(TARGET).lib

$(TARGET).lib: lib/s_math.o
	ar rcs $@ $^

lib/s_math.o: src/s_math.c
	$(CC) $(CFLAG) -c $^ -o $@

clean:
	rm -f lib/*.o lib/*.lib
