/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:08:30 by hbouqssi          #+#    #+#             */
/*   Updated: 2021/11/24 20:41:59 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*nstring;
	int		l1;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	l1 = ft_strlen(s1);
	nstring = (char *)malloc((l1 + ft_strlen(s2)) * sizeof(char));
	if (nstring == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		nstring[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		nstring[l1++] = s2[i++];
	}
	nstring[l1] = '\0';
	return (nstring);
}
