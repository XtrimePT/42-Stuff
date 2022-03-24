NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SOURCES = $(wildcard *.c)

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	gcc -c $(SOURCES) $(FLAGS)
	ar -rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)