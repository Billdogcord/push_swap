/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_checkarg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 06:17:27 by bsaeed            #+#    #+#             */
/*   Updated: 2022/09/28 04:54:41 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ps_argcheck(char **av)
{
	int		i;
	int		j;
	int		k;
	char	*args;

	i = 1;
	j = 0;
	while (av[i])
		j += ft_strlen(av[i++]);
	args = malloc(j + i - 1);
	i = 1;
	j = 0;
	while (av[i])
	{
		k = 0;
		while (av[i][k])
		{
			args[j] = av[i][k];
			j++;
			k++;
		}
		if (av[i + 1])
			args[j++] = ' ';
		i++;
	}
	args[j] = '\0';
	return (args);
}

void	refactor_ac(t_stack *a, t_stack *b, char **av)
{
	char	**new_av;
	int		top;
	int		i;
	int		j;

	j = 0;
	new_av = ft_split(ps_argcheck(av), ' ');
	while (new_av[j])
		j++;
	a->data = malloc(sizeof(int) * j);
	b->data = malloc(sizeof(int) * j);
	a->top = j - 1;
	b->top = -1;
	top = a->top;
	i = -1;
	while (new_av[++i] && top >= 0)
		a->data[top--] = ft_atoi(new_av[i]);
}

void	ps_is_sorted(t_stack *a)
{
	int	i;

	i = a->top;
	while (i >= 0 && a->data[i] < a->data[i - 1])
		i--;
	if (i == 0)
		exit(EXIT_SUCCESS);
}

void	ps_is_dup(t_stack *a)
{
	int	i;
	int	j;

	i = 0;
	while (i <= a->top)
	{
		j = i + 1;
		while (j <= a->top)
		{
			if (a->data[i] == a->data[j])
			{
				ft_putstr_fd("Stack contains a duplicate character\n", 2);
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

void	ps_parsearg(t_stack *a, t_stack *b, char **av)
{
	refactor_ac(a, b, av);
	ps_is_sorted(a);
	ps_is_dup(a);
}
