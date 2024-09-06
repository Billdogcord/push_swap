/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_checksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 04:34:46 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/14 02:59:54 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	bubble(int *list, int top)
{
	int	j;
	int	i;

	i = 0;
	while (i < top)
	{
		j = 0;
		while (j < top - i)
		{
			if (list[j] < list[j + 1])
				ps_swap(&list[j], &list[j + 1]);
			j++;
		}
		i++;
	}
}

int	*ps_sort_chunk(t_stack *a)
{
	int	*list;
	int	i;

	i = -1;
	list = malloc((a->top + 1) * sizeof(int));
	while (++i <= a->top)
		list[i] = a->data[i];
	bubble(list, a->top);
	return (list);
}

void	ps_parsesort(t_stack *a, t_stack *b, t_stack *chunk)
{
	b->flag = 0;
	if (a->top == 0)
		free_it_all(a, b, chunk, 1);
	else if (a->top == 1)
	{
		if (a->data[a->top] > a->data[a->top - 1])
			sa(a);
		ps_free_data(a, b, 0);
	}
	else if (a->top == 2)
	{
		ps_sort_three(a);
		ps_free_data(a, b, 0);
	}
	else if (a->top == 3)
		ps_sort_four(a, b);
	else if (a->top == 4)
		ps_sort_five(a, b);
	chunky_sort(a, b, chunk);
}
