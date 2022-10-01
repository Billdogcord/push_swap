/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:48:30 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/01 02:25:32 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ps_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ps_numsmall(t_stack *a)
{
	int	i;
	int	temp;
	int	index;

	i = a->top;
	while (i >= 0)
	{
		if (i == a->top)
		{
			temp = a->data[i];
			index = i;
		}
		else if (temp > a->data[i])
		{
			temp = a->data[i];
			index = i;
		}
		i--;
	}
	return (index);
}

int	ps_numlarge(t_stack *a)
{
	int	i;
	int	temp;
	int	index;

	i = a->top;
	while (i >= 0)
	{
		if (i == a->top)
		{
			temp = a->data[i];
			index = i;
		}
		else if (temp < a->data[i])
		{
			temp  =a->data[i];
			index = i;
		}
		i--;
	}
	return (index);
}

void	ps_print(t_stack *stack)
{
	int	i;

	i = stack->top;
	while (i >= 0)
	{
		ft_printf("%d = [%d]\n", stack->data[i], i);
		i--;
	}
}

int	ps_find_moves(t_stack *a, t_stack *chunk)
{
	int	i;

	i = a->top;
	while (i >= 0)
	{
		if (a->data[i] == chunk->data[chunk->top])
			return (i);
		i--;
	}
	return (0);
}

void	ps_move(t_stack *a, t_stack *b, t_stack *chunk)
{
	int	i;

	i = ps_find_moves(a, chunk);
	if (i >= a->top / 2)
	{
		while (i < a->top)
		{
			ra(a);
			i++;
		}
		pb(a, b);
		chunk->top--;
	}
	else
	{
		while (i >= 0)
		{
			rra(a);
			i--;
		}
		pb(a, b);
		chunk->top--;
	}
}