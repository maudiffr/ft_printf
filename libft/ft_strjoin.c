/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:03:42 by maudiffr          #+#    #+#             */
/*   Updated: 2022/11/21 10:08:49 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*tab;

	tab = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		tab[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		tab[j] = s2[i];
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
