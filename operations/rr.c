/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:15:24 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/13 18:19:36 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra_rr(t_stack *a)
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
}

void	rb_rr(t_stack *b)
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
}

void	rr(t_stack *a, t_stack *b)
{
	rb_rr(b);
	ra_rr(a);
	ft_printf("rr\n");
}
