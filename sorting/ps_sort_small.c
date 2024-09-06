/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:05:51 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/14 02:29:00 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_sort_three(t_stack *a)
{
	if (a->data[0] > a->data[1] && a->data[1] < a->data[2]
		&& a->data[0] > a->data[2])
		sa(a);
	else if (a->data[0] < a->data[1] && a->data[1] < a->data[2]
		&& a->data[0] < a->data[2])
	{
		sa(a);
		rra(a);
	}
	else if (a->data[0] > a->data[1] && a->data[1] < a->data[2]
		&& a->data[0] < a->data[2])
		ra(a);
	else if (a->data[0] < a->data[1] && a->data[1] > a->data[2]
		&& a->data[0] > a->data[2])
	{
		sa(a);
		ra(a);
	}
	else if (a->data[0] < a->data[1] && a->data[1] > a->data[2]
		&& a->data[0] < a->data[2])
		rra(a);
}

void	ps_sort_four(t_stack *a, t_stack *b)
{
	if (ps_numsmall(a) <= a->top / 2)
		while (ps_numsmall(a) != a->top)
			rra(a);
	else
		while (ps_numsmall(a) != a->top)
			ra(a);
	pb(a, b);
	ps_sort_three(a);
	pa(a, b);
	ps_free_data(a, b, 0);
}

void	ps_sort_five(t_stack *a, t_stack *b)
{
	if (ps_numsmall(a) <= a->top / 2)
		while (ps_numsmall(a) != a->top)
			rra(a);
	else
		while (ps_numsmall(a) != a->top)
			ra(a);
	pb(a, b);
	ps_sort_four(a, b);
	pa(a, b);
	ps_free_data(a, b, 0);
}
