CC = gcc

INC = inc
SRC = src
OBJ = obj
BIN = bin

CFLAGS = -c -g -Wall

LDFLAGS = -o

IFLAGS = -I $(INC)/

all: DAMS

DAMS: $(OBJ)/main.o $(OBJ)/admin.o $(OBJ)/doc.o $(OBJ)/patient.o
	$(CC) $(LDFLAGS) $(BIN)/DAMS $(OBJ)/main.o $(OBJ)/doc.o $(OBJ)/patient.o $(OBJ)/admin.o

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(CFLAGS) $(SRC)/main.c $(IFLAGS)
	mv main.o $(OBJ)/

$(OBJ)/admin.o: $(SRC)/admin.c
	$(CC) $(CFLAGS) $(SRC)/admin.c $(IFLAGS)
	mv admin.o $(OBJ)/

$(OBJ)/doc.o: $(SRC)/doc.c
	$(CC) $(CFLAGS) $(SRC)/doc.c $(IFLAGS)
	mv doc.o $(OBJ)/

$(OBJ)/patient.o: $(SRC)/patient.c
	$(CC) $(CFLAGS) $(SRC)/patient.c $(IFLAGS)
	mv patient.o $(OBJ)/

clean: 
	rm -f *.out *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/*
	@echo "Cleaning Done!"

