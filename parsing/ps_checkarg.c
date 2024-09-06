/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_checkarg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 06:17:27 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/12 05:53:17 by bsaeed           ###   ########.fr       */
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
			args[j++] = av[i][k++];
		if (av[i + 1])
			args[j++] = ' ';
		i++;
	}
	args[j] = '\0';
	return (args);
}

int	ps_isdigit(int c)
{
	if (!((c >= '0' && c <= '9') || (c == ' ') || c == '-' || c == '+'))
		return (1);
	return (0);
}

void	letters(char *args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if (ps_isdigit(args[i]))
		{
			free(args);
			ft_putstr_fd("Error\n", 2);
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

void	refactor_ac(t_stack *a, t_stack *b, char **av)
{
	char	**new_av;
	char	*avfix;
	int		top;
	int		i;
	int		j;

	j = 0;
	avfix = ps_argcheck(av);
	letters(avfix);
	new_av = ft_split(avfix, ' ');
	free(avfix);
	while (new_av[j])
		j++;
	a->data = malloc(sizeof(int) * j);
	b->data = malloc(sizeof(int) * j);
	a->top = j - 1;
	b->top = -1;
	top = a->top;
	i = -1;
	while (new_av[++i] && top >= 0)
		a->data[top--] = ps_atoi(new_av[i], a, b, new_av);
	free_split(new_av);
}

void	ps_parsearg(t_stack *a, t_stack *b, char **av)
{
	refactor_ac(a, b, av);
	ps_is_sorted(a, b);
	ps_is_dup(a, b);
}
