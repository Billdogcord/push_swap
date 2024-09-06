/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_large.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:27:01 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/14 03:24:32 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_push_back(t_stack *a, t_stack *b, int index)
{
	int	i;

	i = index;
	if (i >= b->top / 2)
	{
		while (i < b->top)
		{
			rb(b);
			i++;
		}
		pa(a, b);
		ps_swapper(a);
	}
	else
	{
		while (i >= 0)
		{
			rrb(b);
			i--;
		}
		pa(a, b);
		ps_swapper(a);
	}
}

int	*return_indecies(t_stack *a, t_stack *chunk)
{
	int	div;
	int	*chunk_indecies;
	int	i;
	int	temp;

	i = CHUNK_SIZE - 1;
	div = a->top / CHUNK_SIZE;
	temp = div;
	chunk_indecies = malloc(CHUNK_SIZE * sizeof(int));
	while (i >= 0)
	{
		chunk_indecies[i] = chunk->data[div];
		div += temp;
		i--;
	}
	return (chunk_indecies);
}

void	push_to_b(t_stack *a, t_stack *b, int *sorted)
{
	int	i;
	int	d;
	int	mid;
	int	chunk_limit;

	i = 1;
	d = 0;
	mid = a->top / 4;
	chunk_limit = (a->top / CHUNK_SIZE) - 1;
	while (a->top >= 0 && i < CHUNK_SIZE)
	{
		if (a->data[a->top] < sorted[i])
		{
			pb(a, b);
			ps_optimizoor(b, mid);
			d++;
		}
		else
			ra(a);
		if (d >= chunk_limit)
		{
			d = 0;
			i++;
		}
	}
}

void	clean_push_back(t_stack *a, t_stack *b)
{
	while (a->top >= 0)
		pb(a, b);
	while (b->top >= 0)
		ps_push_back(a, b, ps_compare(b));
}

void	chunky_sort(t_stack *a, t_stack *b, t_stack *chunk)
{
	int	*sorted;

	ps_initchunk(a, chunk);
	sorted = return_indecies(a, chunk);
	push_to_b(a, b, sorted);
	clean_push_back(a, b);
	free(sorted);
	free_it_all(a, b, chunk, 0);
}
