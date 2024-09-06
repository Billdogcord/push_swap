/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 04:31:53 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/11 16:01:58 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_stack *b)
{
	int	top;
	int	temp;
	int	repp;

	top = b->top;
	repp = b->data[0];
	while (top)
	{
		if (top == b->top)
			temp = b->data[top];
		ps_swap(&temp, &b->data[top - 1]);
		top--;
	}
	b->data[b->top] = repp;
	ft_printf("rrb\n");
}
