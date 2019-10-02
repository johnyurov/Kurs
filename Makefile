CC := g++ -Wall -Werror
C := g++
# FLAGS := -std=c99
# FLAG := -std=c11
SRC_DIR := ./src
BIN_DIR := ./bin
OBJ_DIR := ./obj
TEST_OBJ := ./obj/test
TEST_DIR := ./test

.PHONY: all clean

#	gcc main.c `sdl2-config --libs --cflags` --std=c99 -Wall -lSDL2_image -lm -o main
# gcc -I thirdparty src -c test/board_test.c -o build/test/board_test.o
# gcc ./test/*.c ./src/geometry.c -lm -std=c11

all: $(BIN_DIR)/zero

$(BIN_DIR)/zero: $(OBJ_DIR)/main.o $(OBJ_DIR)/funk.o
	$(CC) $(OBJ_DIR)/main.o $(OBJ_DIR)/funk.o $(FLAGS) -o $(BIN_DIR)/zero

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) -c $(SRC_DIR)/main.cpp -o $(OBJ_DIR)/main.o $(FLAGS)

$(OBJ_DIR)/funk.o: $(SRC_DIR)/funk.cpp
	$(CC) -c $(SRC_DIR)/funk.cpp -o $(OBJ_DIR)/funk.o $(FLAGS)


# $(BIN_DIR)/test: $(TEST_OBJ)/main.o $(TEST_OBJ)/play.o $(OBJ_DIR)/play.o
#	$(C) $(TEST_OBJ)/main.o $(TEST_OBJ)/play.o $(OBJ_DIR)/play.o $(FLAG) $(LIBS) -o $(BIN_DIR)/test $(SDL2)

# $(TEST_OBJ)/main.o: $(TEST_DIR)/main.c
#	$(C) -c $(TEST_DIR)/main.c -o $(TEST_OBJ)/main.o $(FLAG)

# $(TEST_OBJ)/play.o: $(TEST_DIR)/play.c
#	$(C) -c $(TEST_DIR)/play.c -o $(TEST_OBJ)/play.o $(FLAG)

test_run: all
	./bin/test

clean:
	find -name "*.o" -exec rm -rf {} +
	rm -rf ./bin/hangman
	rm -rf ./bin/test
