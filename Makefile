NAME 		= libftprintf.a

CC			= cc

CFLAGS		= -Wall -Wextra -Werror

SOURCE		=	ft_putchar.c ft_putstr.c ft_putnbr.c ft_putptr.c \
				ft_puthex.c ft_printf.c ft_putunsigned.c \

OBJECT		= $(SOURCE:.c=.o) # Substitution

ARCHIVE		= ar -c -r # To Create The Archive

all:	$(NAME) 

#Compile and assemble
%.o:	%.c # Pattern rule 
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJECT) # Creates The Archive
			$(ARCHIVE) $(NAME) $(OBJECT) 

clean:
			rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re