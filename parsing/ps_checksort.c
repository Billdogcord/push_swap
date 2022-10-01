/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_checksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 04:34:46 by bsaeed            #+#    #+#             */
/*   Updated: 2022/09/28 04:52:40 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_parsesort(t_stack *a, t_stack *b)
{
	if (a->top == 0)
	{
		ft_printf("Stack has only one number, already sorted\n");
		exit(EXIT_FAILURE);
	}
	else if (a->top == 1)
	{
		if (a->data[a->top] > a->data[a->top - 1])
			sa(a);
	}
	else if (a->top == 2)
		ps_sort_three(a);
	else if (a->top == 3)
		ps_sort_four(a, b);
	else if (a->top == 4)
		ps_sort_five(a, b);
}