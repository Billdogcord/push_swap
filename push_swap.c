/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 01:18:26 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/14 03:25:42 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(int ac, char **av)
{
	int	bulb;
	int	i;

	bulb = 0;
	i = 1;
	while (i <= ac - 1)
	{
		if (av[i][0])
			bulb++;
		i++;
	}
	if (bulb == 0)
		exit (EXIT_SUCCESS);
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	t_stack	chunk;

	if (ac <= 1)
		exit (EXIT_SUCCESS);
	check_args(ac, av);
	ps_parsearg(&a, &b, av);
	ps_parsesort(&a, &b, &chunk);
}
