/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 03:12:27 by bsaeed            #+#    #+#             */
/*   Updated: 2022/04/08 14:51:42 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	trim;
	char	*heap;

	if (!s1 && !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	trim = ft_strlen(s1);
	while (trim && ft_strchr(set, s1[trim]))
		trim--;
	heap = ft_substr((char *)s1, 0, trim + 1);
	return (heap);
}
