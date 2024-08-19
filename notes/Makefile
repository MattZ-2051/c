TARGET = bin/final
SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, obj/%.0, $(SRC))

default: $(TARGET)

clean:
    rm -f obj/*.0
    rm -f bin/*

$(TARGET): $(OBJ)

    gcc - 0 $A $?

obj/%.o : src/%.c
        gcc - c $< -o $@ -Iinclude
