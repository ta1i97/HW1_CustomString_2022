SRC=src
OBJ=obj
BIN=bin

CFLAGS += -g3 -Iinclude
CC=g++ -std=c++11
TARGET= customString
RM=rm -rf

$(shell mkdir -p obj)

SRCS=$(wildcard $(SRC)/*.cpp)
OBJS=$(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(CFLAGS)

$(OBJ)/%.o: $(SRC)/%.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJ)/*.o 

fclean: clean
	$(RM) $(TARGET) $(OBJ)

re: 	fclean all

.PHONY: all clean fclean re