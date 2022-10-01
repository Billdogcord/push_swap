/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 06:13:31 by bsaeed            #+#    #+#             */
/*   Updated: 2022/09/27 16:59:42 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_stack *a)
{
	int	i;
	int	temp;
	int	repp;
	int	top;

	i = 0;
	top = a->top;
	repp = a->data[top];
	while (i < top)
	{
		if (i == 0)
			temp = a->data[i];
		ps_swap(&temp, &a->data[i + 1]);
		i++;
	}
	a->data[0] = repp;
	ft_printf("ra\n");
}