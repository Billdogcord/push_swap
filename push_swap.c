/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 01:18:26 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/01 02:31:05 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	t_stack	chunk;

	if (ac <= 2)
		ft_putstr_fd("[usage][not enough arguments]", 2);
	ps_parsearg(&a, &b, av);
	// ps_parsesort(&a, &b);
	// ps_is_sorted(&a);
	chunk.data = ps_sort_chunk(&a);
	chunk.top = a.top;
	// while (a.top >= 0)
	// 	ps_move(&a, &b, &chunk);
	// while (b.top >= 0)
	// 	pa(&a, &b);
	// chunk.top = a.top;
	ps_print(&chunk);
	return (0);
}
