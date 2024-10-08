# Nom de l'exécutable
TARGET = main

# Compilateur à utiliser
CC = gcc

# Options de compilation
CFLAGS = -Wall -Wextra -std=c11

# Fichiers sources
SRCS = main.c struct.h

# Règles de compilation
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

# Nettoyage des fichiers générés
clean:
	rm -f $(TARGET)

# Règle pour exécuter le programme
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
