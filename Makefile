# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 16:36:35 by bsaeed            #+#    #+#              #
#    Updated: 2022/09/28 04:34:34 by bsaeed           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRC		= operations/pa.c operations/pb.c operations/ra.c operations/rra.c\
operations/sb.c operations/sa.c parsing/ps_checkarg.c ps_sort_small.c ps_sort_large.c ps_utils.c\
push_swap.c parsing/ps_checksort.c

OBJ		= $(SRC:.c=.o)

LIBFT	= libft.a

CFLAGS	= -Wall -Wextra -Werror

%.o : %.c
				@printf "▁▂▃▄▅▆▇█ 𝙇𝙤𝙖𝙙𝙞𝙣𝙜…"
				@printf "\033[0;32m"
				@printf "\033[A\033[2K\r"
				$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME): $(LIBFT) $(OBJ)
		 gcc -o $(NAME) $(OBJ) libft/$(LIBFT)
		 @printf "\033[0;37m"
		 @printf "𝘾𝙤𝙢𝙥𝙞𝙡𝙚𝙙 𝙎𝙪𝙘𝙘𝙚𝙨𝙛𝙪𝙡𝙡𝙮!\n"

$(LIBFT):
		make -C libft all

clean:
		rm -f $(OBJ)
		make -C libft fclean
fclean: clean
		rm -f $(NAME)
re:		fclean all

.PHONY:	all clean fclean re