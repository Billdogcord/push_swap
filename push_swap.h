/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:33:53 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/14 03:24:32 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int	top;
	int	flag;
	int	*data;
}	t_stack;

# define CHUNK_SIZE 9

void	sa(t_stack *a);
void	sb(t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rra(t_stack *a);
void	rb(t_stack *b);
void	rrb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	ps_swap(int *a, int *b);
void	ps_parse(t_stack *a);
void	ps_sort_three(t_stack *a);
void	ps_sort_four(t_stack *a, t_stack *b);
void	ps_sort_five(t_stack *a, t_stack *b);
void	ps_parsearg(t_stack *a, t_stack *b, char **av);
void	ps_parsesort(t_stack *a, t_stack *b, t_stack *chunk);
void	ps_is_sorted(t_stack *a, t_stack *b);
void	ps_is_dup(t_stack *a, t_stack *b);
int		ps_numsmall(t_stack *a);
int		ps_numlarge(t_stack *stack);
int		*ps_sort_chunk(t_stack *a);
void	chunky_sort(t_stack *a, t_stack *b, t_stack *chunk);
void	ps_initchunk(t_stack *a, t_stack *chunk);
void	ps_swapper(t_stack *a);
void	ps_optimizoor(t_stack *b, int mid);
int		ps_compare(t_stack *b);
int		ps_second(t_stack *stack);
void	free_it_all(t_stack *a, t_stack *b, t_stack *chunk, int flag);
void	free_split(char **str);
int		ps_atoi(char *str, t_stack *a, t_stack *b, char **new_av);
void	ps_free_data(t_stack *a, t_stack *b, int flag);
void	ps_push_back(t_stack *a, t_stack *b, int index);

#endif
