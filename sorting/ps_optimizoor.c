/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_optimizoor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 02:13:17 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/13 20:01:48 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_optimizoor(t_stack *b, int mid)
{
	if (b->top > 0 && b->data[b->top] < mid)
		rb(b);
}

void	ps_swapper(t_stack *a)
{
	if (a->top > 0)
	{
		if (a->data[a->top] > a->data[a->top - 1])
			sa(a);
	}
}

int	ps_compare(t_stack *b)
{
	int	mid;
	int	first;
	int	second;

	first = ps_numlarge(b);
	second = ps_second(b);
	mid = b->top / 2;
	if (b->flag == 0)
	{
		b->flag = 1;
		if (first > mid && second > mid && second > first)
			return (second);
		else if (first <= mid && second <= mid && second < first)
			return (second);
		else if (first <= mid && second > mid && b->top - second < first)
			return (second);
		else if (first <= mid && second > mid && (b->top - second) + 1 < first)
			return (second);
		else if (first > mid && second <= mid && (b->top - first) + 1 > second)
			return (second);
	}
	b->flag = 0;
	return (first);
}
