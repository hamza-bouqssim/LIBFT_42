/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:09:17 by hbouqssi          #+#    #+#             */
/*   Updated: 2021/11/15 16:29:00 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j]
			&& haystack[i + j] != '\0'
			&& needle[j] != '\0' && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
					j++;
		}
		i++;
	}
	return (NULL);
}
