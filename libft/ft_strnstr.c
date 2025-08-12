/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:05:12 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/01 13:32:35 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;

	hay = (char *)haystack;
	i = 0;
	j = 0;
	if (ft_strlen(hay) == 0 && ft_strlen(needle) == 0)
		return (hay);
	if (ft_strlen(hay) == 0)
		return (NULL);
	if (ft_strlen(needle) == 0)
		return (&hay[i]);
	while (hay[i])
	{
		while (needle[j] == hay[i + j] && needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return (&hay[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
