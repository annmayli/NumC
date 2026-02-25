# Variables to make the file easy to update
CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -g
LDFLAGS = -lm

# The final executable name
TARGET = lalc

# The object files (compiled versions of your .c files)
OBJS = src/main.o src/matrix.o src/linalg.o src/stats.o

# The default rule: what happens when you just type 'make'
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

# Rule to clean up the folder (removes compiled files)
clean:
	rm -f src/*.o $(TARGET)