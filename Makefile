#Makefil
CC = gcc
#CFLAGS = -W -Wmak
TARGET = add-nbo
OBJECTS = add-nbo.c

all : $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^

clean:
	rm -f *.o
	rm -f $(TARGET)
