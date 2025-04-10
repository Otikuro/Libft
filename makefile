#NAME The name of the executable
NAME = libft
#CFLAGS The flags we want to use
CFLAGS = -Wall -Werror -Wextra

#FILES 
FILES = $(*.c)

#Esta regla es la que se necesita para ejecutar las demás
$(NAME): $(OBJS)
	cc -o $(NAME) $(OBJS)

#indicas que va a realizar todas las acciones
all: $(NAME)

#quita todos los .o
clean:
	rm -f $(OBJS)

#quita .o y el binario
fclean:	clean
	rm -f $(NAME)

#ejecuta fclean y crea de nuevo el binario.
re: fclean all
