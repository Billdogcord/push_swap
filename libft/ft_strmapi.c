/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 05:15:22 by bsaeed            #+#    #+#             */
/*   Updated: 2022/04/07 16:10:40 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*heap;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	heap = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!heap)
		return (NULL);
	while (s[i])
	{
		heap[i] = f(i, s[i]);
		i++;
	}
	heap[i] = 0;
	return (heap);
}
