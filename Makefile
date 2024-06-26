#**************************************************************************** #
# #
# :: : :: :: :: ::#
#Makefile : + : : + : : + : #
#+ : + + : + + : + #
#By : davidro2 < davidro2 @student .42.fr> + # + + : ++# + #
#+ #+ #+ #+ #+ #+ + #+ #
#Created : 2023 / 10 / 04 15 : 30 : 18 by davidro2 # + # # + # #
#Updated : 2023 / 10 / 13 13 : 08 : 16 by davidro2## # ########.fr #
# #
#**************************************************************************** #

SRC = \
	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_substr.c ft_strtrim.c \
	ft_split.c ft_putchar_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c get_next_line.c \
	get_next_line_utils.c get_next_line_bonus.c ft_vdtohex_pf.c ft_uputnbr_pf.c \
	ft_strlen_pf.c ft_putstr_pf.c ft_putnbr_pf.c ft_puthex_pf.c \
	ft_putchar_pf.c ft_printf.c ft_print_format.c \

BSRC = \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRC:.c=.o)

BOBJS = $(BSRC:.c=.o)

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rsc $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS) $(BOBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

bonus:		$(BOBJS) $(OBJS)
			ar rsc $(NAME) $(BOBJS) $(OBJS)

.PHONY:	all clean fclean re