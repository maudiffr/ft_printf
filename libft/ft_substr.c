/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:26:52 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/05 11:01:06 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tab;

	if (len < ft_strlen(s))
		tab = malloc(sizeof(char) * (len + 1));
	if (len >= ft_strlen(s))
		tab = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < start && s[j])
		j++;
	while (i < len && s[j])
	{
		tab[i] = s[j];
		i++;
		j++;
	}
	tab[i] = 0;
	return (tab);
}
