CC=gcc
SSD=ssd
TEST=testShell
INC=./includes/
S_SRCS=$(wildcard ./srcs/SSD/*.c)
T_SRCS=$(wildcard ./srcs/TEST/*.c)
S_OBJS=$(S_SRCS:.c=.o)
T_OBJS=$(T_SRCS:.c=.o)

%.o:%.c
	$(CC) -I$(INC) -c $^ -o $@

all: $(TEST)
# all: $(SSD) $(TEST)

$(SSD): $(S_OBJS)
	$(CC) -I$(INC) -o $(SSD) $(S_OBJS)

$(TEST): $(T_OBJS)
	$(CC) -I$(INC) -o $(TEST) $(T_OBJS)

clean:
	rm -f $(S_OBJS)
	rm -f $(T_OBJS)

fclean: clean
	rm -f $(SSD)
	rm -f $(TEST)

re: fclean all

.PHONY: all clean fclean re