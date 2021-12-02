/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:09:22 by hbouqssi          #+#    #+#             */
/*   Updated: 2021/11/12 23:29:02 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*su;
	unsigned char	*sd;

	i = 0;
	su = (unsigned char *)s1;
	sd = (unsigned char *)s2;
	while (i < n && (su[i] != '\0' || sd[i] != '\0'))
	{
		if (!(su[i] == sd[i]))
		{
			return (su[i] - sd[i]);
		}
		i++;
	}
	return (0);
}
