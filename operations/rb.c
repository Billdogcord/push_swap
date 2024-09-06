/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 04:31:45 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/11 15:22:36 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_stack *b)
{
	int	i;
	int	temp;
	int	repp;
	int	top;

	i = 0;
	top = b->top;
	repp = b->data[top];
	while (i < top)
	{
		if (i == 0)
			temp = b->data[i];
		ps_swap(&temp, &b->data[i + 1]);
		i++;
	}
	b->data[0] = repp;
	ft_printf("rb\n");
}
