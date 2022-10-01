/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:33:53 by bsaeed            #+#    #+#             */
/*   Updated: 2022/09/28 04:50:42 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int	top;
	int	*data;
}	t_stack;

void	sa(t_stack *a);
void	sb(t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rra(t_stack *a);
void	ps_swap(int *a, int *b);
void	ps_move(t_stack *a, t_stack *b, t_stack *chunk);
void	ps_parse(t_stack *a);
void	ps_sort_three(t_stack *a);
void	ps_sort_four(t_stack *a, t_stack *b);
void	ps_sort_five(t_stack *a, t_stack *b);
void	ps_parsearg(t_stack *a, t_stack *b, char **av);
void	ps_parsesort(t_stack *a, t_stack *b);
void	ps_is_sorted(t_stack *a);
void	ps_print(t_stack *stack);
int		ps_numsmall(t_stack *a);
int		ps_numlarge(t_stack *a);
int		ps_find_moves(t_stack *a, t_stack *chunk);
int		*ps_sort_chunk(t_stack *a);

#endif
