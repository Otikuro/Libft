COMPILER = cc
#NAME The name of the executable
NAME = libft.a
#SRC 
SRC = $(wildcard *.c)
#CFLAGS The flags we want to use
FLAGS = -Wall -Werror -Wextra


OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%o: %.c
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all
