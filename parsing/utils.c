/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 04:34:52 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/14 03:03:07 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sign_check(char *str, t_stack *a, t_stack *b, char **new_av)
{
	int	i;
	int	k;

	i = 0;
	k = -1;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			k++;
		if (k > 0)
		{
			ft_putstr_fd("Error\n", 2);
			free_split(new_av);
			ps_free_data(a, b, 1);
		}
		i++;
	}
}

void	sign_check2(char *str, t_stack *a, t_stack *b, char **new_av)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '+' || str[i] == '-') && is_space(str[i + 1]))
		{
			ft_putstr_fd("Error\n", 2);
			free_split(new_av);
			ps_free_data(a, b, 1);
		}
		if (ft_isdigit(str[i]) && (str[i + 1] == '+' || str[i + 1] == '-'))
		{
			ft_putstr_fd("Error\n", 2);
			free_split(new_av);
			ps_free_data(a, b, 1);
		}
		if ((str[i] == '-' || str[i] == '+') && (!str[i + 1]))
		{
			ft_putstr_fd("Error\n", 2);
			free_split(new_av);
			ps_free_data(a, b, 1);
		}
		i++;
	}
}

int	ps_atoi(char *str, t_stack *a, t_stack *b, char **new_av)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	if (*str == '-')
		sign *= -1;
	sign_check(str, a, b, new_av);
	sign_check2(str, a, b, new_av);
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
		if ((result > 2147483648 && sign == -1)
			|| (result > 2147483647 && sign == 1))
		{
			ft_putstr_fd("Error\n", 2);
			free_split(new_av);
			ps_free_data(a, b, 1);
		}
	}
	return (result * sign);
}

void	ps_is_sorted(t_stack *a, t_stack *b)
{
	int	i;

	i = a->top;
	while (i >= 1 && a->data[i] < a->data[i - 1] && i - 1 >= 0)
		i--;
	if (i == 0 && b->top == -1)
	{
		free (a->data);
		free (b->data);
		exit(EXIT_SUCCESS);
	}
}

void	ps_is_dup(t_stack *a, t_stack *b)
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
				ft_putstr_fd("Error\n", 2);
				free (a->data);
				free (b->data);
				exit (EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}
