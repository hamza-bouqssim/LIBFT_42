/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:16:29 by hbouqssi          #+#    #+#             */
/*   Updated: 2021/11/18 13:05:19 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*charac;

	charac = (char *)s;
	while (*charac)
	{
		if (*charac == (char)c)
			return (charac);
		charac++;
	}
	if ((char)c == '\0')
		return (charac);
	return (NULL);
}
