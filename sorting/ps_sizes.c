/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sizes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:34:58 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/11 15:38:41 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

int	ps_numlarge(t_stack *stack)
{
	int	i;
	int	temp;
	int	index;

	i = stack->top;
	while (i >= 0)
	{
		if (i == stack->top)
		{
			temp = stack->data[i];
			index = i;
		}
		else if (temp < stack->data[i])
		{
			temp = stack->data[i];
			index = i;
		}
		i--;
	}
	return (index);
}

int	ps_second(t_stack *stack)
{
	int	i;
	int	temp;
	int	large;
	int	index;

	i = stack->top;
	large = ps_numlarge(stack);
	while (i >= 0)
	{
		if (i == stack->top)
		{
			temp = stack->data[i];
			index = i;
		}
		else if (temp < stack->data[i])
		{
			if (stack->data[i] < stack->data[large])
			{
				temp = stack->data[i];
				index = i;
			}
		}
		i--;
	}
	return (index);
}
