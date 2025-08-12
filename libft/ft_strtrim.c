/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:06:44 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/02 12:11:49 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	h;
	char	*tab;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > 0 && j >= i && ft_strchr(set, s1[j]))
		j--;
	h = i;
	if (ft_strlen(s1) == 0)
		tab = malloc(sizeof(char) * 1);
	else
		tab = malloc(sizeof(char) * (j - h + 2));
	if (tab == NULL)
		return (NULL);
	while (k < j - h + 1 && s1[i])
		tab[k++] = s1[i++];
	tab[k] = 0;
	return (tab);
}
