# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 02:56:32 by bsaeed            #+#    #+#              #
#    Updated: 2022/09/27 17:27:14 by bsaeed           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isdigit.c ft_memset.c ft_strjoin.c ft_isprint.c ft_putchar_fd.c ft_strlcat.c \
 ft_substr.c ft_atoi.c ft_itoa.c ft_putendl_fd.c ft_strlcpy.c ft_tolower.c ft_bzero.c ft_putnbr_fd.c \
 ft_strlen.c ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c ft_memcmp.c\
 ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strnstr.c ft_isascii.c ft_memmove.c\
 ft_strdup.c ft_strrchr.c ft_strtrim.c ft_striteri.c ft_putchar.c ft_putstr.c ft_putnbr.c\
 printf/ft_printhexa.c printf/ft_printptr.c printf/ft_printunsign.c printf/ft_help1.c printf/ft_help2.c printf/ft_printf.c\

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -g

%.o : %.c
				@printf "▁▂▃▄▅▆▇█ 𝙇𝙤𝙖𝙙𝙞𝙣𝙜…"
				@printf "\033[0;34m"
				@printf "\033[A\033[2K\r"
				$(CC) $(CFLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
