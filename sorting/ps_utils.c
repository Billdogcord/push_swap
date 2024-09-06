/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:48:30 by bsaeed            #+#    #+#             */
/*   Updated: 2022/10/14 02:26:32 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ps_initchunk(t_stack *a, t_stack *chunk)
{
	chunk->data = ps_sort_chunk(a);
	chunk->top = a->top;
}

void	free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free (str[i++]);
	free (str);
}

void	free_it_all(t_stack *a, t_stack *b, t_stack *chunk, int flag)
{
	free (a->data);
	free (b->data);
	free (chunk->data);
	if (flag == 1)
		exit(EXIT_FAILURE);
	else if (flag == 0)
		exit(EXIT_SUCCESS);
}

void	ps_free_data(t_stack *a, t_stack *b, int flag)
{
	if (b->top == -1)
	{
		free(a->data);
		free(b->data);
		exit(flag);
	}
}
