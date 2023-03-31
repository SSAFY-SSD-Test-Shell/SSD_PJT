CC=gcc
SSD=ssd
TEST=testShell
INC=./
S_SRCS=$(wildcard ./srcs/SSD/*.c)
T_SRCS=$(wildcard ./srcs/TEST/*.c)
S_OBJS=$(S_SRCS:.c=.o)
T_OBJS=$(T_SRCS:.c=.o)

%.o:%.c
	$(CC) -c $^ -o $@

all: $(SSD) $(TEST)

$(SSD): $(S_OBJS)
	$(CC) -o $(SSD) $(S_OBJS)

$(TEST): $(T_OBJS)
	$(CC) -o $(TEST) $(T_OBJS)

clean:
	rm $(S_OBJS)
	rm $(T_OBJS)

fclean: clean
	rm $(SSD)
	rm $(TEST)

re: fclean all

.PHONY: all clean fclean re