/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:53:58 by hbouqssi          #+#    #+#             */
/*   Updated: 2021/11/24 09:41:23 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	int		i;
	int		start;
	int		end;

	i = 0;
	start = 0;
	if (!set)
		return (NULL);
	if (!s1)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	tab = (char *)malloc((end - start + 1) * sizeof(char));
	while (end < start || !tab)
		return (NULL);
	while (end > start)
		tab[i++] = s1[start++];
	tab[i] = '\0';
	return (tab);
}
