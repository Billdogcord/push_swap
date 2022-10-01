 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 00:03:00 by bsaeed            #+#    #+#             */
/*   Updated: 2022/09/27 17:07:47 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
