CC = gcc
CSTD=-std=c99
CFLAG = -Wall -Werror -Wimplicit-function-declaration -g
TARGET = lib/sloth

all: $(TARGET).lib

$(TARGET).lib: lib/s_math.o
	ar rcs $@ $^

lib/s_math.o: src/s_math.c
	$(CC) $(CSTD) $(CFLAG) -c $^ -o $@

clean:
	rm -f lib/*.o lib/*.lib
