/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 06:12:51 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/11 16:01:41 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *a)
{
	int	top;
	int	temp;
	int	repp;

	top = a->top;
	repp = a->data[0];
	while (top)
	{
		if (top == a->top)
			temp = a->data[top];
		ps_swap(&temp, &a->data[top - 1]);
		top--;
	}
	a->data[a->top] = repp;
	ft_printf("rra\n");
}
