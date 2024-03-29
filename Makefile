# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/17 19:41:12 by jcruz-y-          #+#    #+#              #
#    Updated: 2019/01/22 18:51:12 by jcruz-y-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

LIBFTPRINTF_PATH = ft_printf

SRCS = ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strlen.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putnbr.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_versub.c \
		ft_numwords.c \
		ft_arrstrnew.c \
		ft_numlenpn.c \
		get_next_line.c \
		ft_lstrev.c \

SRCSO=$(SRCS:.c=.o) 

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) -c $(SRCS)
	@ar rc $(NAME) $(SRCSO)
	@ranlib $(NAME)
	@echo "\033[32mBuilt libft library.\033[0m"

test: re
	/bin/rm -f test
	@gcc -g -o test ../resources/test.c -L . -lft

clean:
	@/bin/rm -f $(SRCSO)
	@echo "\033[32mCleaned up libft object files.\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[32mRemoved library.\033[0m"

re: fclean all

.PHONY: all clean fclean re
