SOURCES =   ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			#ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c
SOURCES :=	$(addprefix ./src/,$(SOURCES))
OBJECTS = $(SOURCES:./src/%.c=./obj/%.o)

SOURCES_B =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c
OURCES_B :=	$(addprefix ./src/bonus/,$(SOURCES_B))
OBJECTS_B = $(SOURCES_B:./src/%.c=./obj/%.o)

NAME = libft.a
NAME_B = libft_bonus.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

all:	mk_objdir $(NAME)

mk_objdir:
	mkdir -p obj

bonus:	mk_objdir_b $(NAME_B)

mk_objdir_b:
	mkdir -p obj/bonus

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

obj/%.o: src/%.c
	$(CC) $(FLAGS) -I ./include -c $< -o $@

$(NAME_B): $(OBJECTS_B)
	ar -rcs $(NAME_B) $(OBJECTS_B)

obj/bonus/%.o: src/bonus/%.c
	$(CC) $(FLAGS) -I ./include -c $< -o $@


clean:
	$(RM) $(OBJECTS) $(OBJECTS_B)

fclean: clean
	$(RM) $(NAME) $(NAME_B)

re: fclean all

so:
	$(CC) -nostartfiles -I ./include -fPIC $(FLAGS) $(SOURCES)
	$(CC) -nostartfiles -shared -o libft.so $(OBJECTS)

.PHONY:	all clean fclean re bonus
