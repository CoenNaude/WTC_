NAME = libft.a
HEAD = /include/*.h 
SRC =							ft_isalpha.c 					\
	  							ft_isdigit.c					\
	  							ft_isascii.c					\
	  							ft_isalnum.c					\
								ft_isprint.c					\
								ft_toupper.c					\
								ft_isspace.c					\
								ft_tolower.c					\
								ft_islower.c					\
								ft_isupper.c 					\
								ft_iswspace.c					\
								ft_putstr.c 					\
								ft_strcat.c 					\
								ft_strcpy.c 					\
								ft_strlen.c 					\
								ft_strchr.c 					\
								ft_strcmp.c 					\
								ft_strnstr.c 					\
								ft_strstr.c 					\
								ft_strncpy.c 					\
								ft_strrchr.c 					\
								ft_strncat.c 					\
								ft_strlcat.c 					\
								ft_strncmp.c 					\
								ft_atoi.c						\
								ft_putendl.c					\
								ft_strdup.c						\
								ft_strclr.c 					\
								ft_bzero.c						\
								ft_memcmp.c						\
								ft_memcpy.c						\
								ft_memccpy.c					\
								ft_memmove.c					\
								ft_memchr.c						\
								ft_memset.c						\
								ft_putchar.c					\
								ft_putnbr.c						\
								ft_putchar_fd.c					\
								ft_putstr_fd.c					\
								ft_putendl_fd.c					\
								ft_striter.c					\
								ft_striteri.c					\
								ft_strequ.c						\
								ft_strdel.c						\
								ft_strnequ.c					\
								ft_strmapi.c					\
								ft_strnew.c						\
								ft_strsub.c						\
								ft_strtrim.c					\
								ft_strsplit.c					\
								ft_itoa.c						\
								ft_nbrlen.c						\
								ft_memalloc.c					\
								ft_memdel.c						\
								ft_putnbr_fd.c					\
								ft_wordlen.c					\
								ft_wordcount.c					\
								ft_strmap.c						\
								ft_strjoin.c					\
								ft_lstadd.c						\
								ft_lstdel.c						\
								ft_lstdelone.c					\
								ft_lstiter.c					\
								ft_lstmap.c						\
								ft_lstnew.c						\
								ft_ultimate_div_mod.c			\
								ft_swap.c						\
								ft_ft.c							\
								ft_div_mod.c					\
								ft_iterative_factorial.c		\
								ft_sqrt.c						\
								ft_recursive_power.c			\
								ft_max.c						\
								ft_putwchar.c 					\
								ft_putnstr_fd.c					\
								ft_putwchar_fd.c				\
								ft_putnstr.c					\
								ft_putwchar.c					\
								ft_putnwstr.c					\
								ft_nstrlen.c					\
								ft_putnbrbase_fd.c				\
								ft_putnbrbase.c					\
\
								ft_parse_handlers.c				\
								ft_printf.c						\
\
								ft_generic_handle_unsigned.c	\
								ft_get_handler_arr.c			\
								ft_printf_handle_binary.c		\
								ft_printf_handle_char.c			\
								ft_printf_handle_charswritten.c	\
								ft_printf_handle_escape.c		\
								ft_printf_handle_float.c		\
								ft_printf_handle_hex.c			\
								ft_printf_handle_int.c			\
								ft_printf_handle_long.c			\
								ft_printf_handle_null.c			\
								ft_printf_handle_octal.c		\
								ft_printf_handle_ptr.c			\
								ft_printf_handle_str.c			\
								ft_printf_handle_unsigned.c		\
								ft_printf_handle_wchar.c		\
								ft_printf_handle_wstr.c			\
\
								ft_calc_nbrstrlen.c				\
								ft_get_unsigned_from_length.c	\
								nbrlen.c						\
								ft_nbrforceprefix.c				\
								ft_width_pad.c					\
								
SRCO = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRC) -I .
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)
clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean