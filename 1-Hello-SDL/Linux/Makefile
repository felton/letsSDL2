#SDL2 Makefile

srcdir	= ..
CC	= g++
CFLAGS	= `sdl2-config --cflags`
LIBS	= `sdl2-config --libs`
EXE	= Hello-SDL
SOURCE	= $(srcdir)/main.cpp
OBJ	= main.o

$(OBJ): $(SOURCE)
	$(CC) -c -o $@ $^ $(CFLAGS)

$(EXE): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

