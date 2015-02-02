CC=gcc
CFLAGS= -Wall -Wextra -std=c99 -O3
LDFLAGS =

NAME = SortAlgo

SRCS = main.c algo.c

OBJS = $(SRCS:.c=.o)
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(LDFLAGS) $(OBJS) -o $(NAME) $(SOURCE)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
