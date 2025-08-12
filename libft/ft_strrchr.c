/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:18:39 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/01 11:33:41 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			*str;
	unsigned char	d;

	str = (char *)s;
	i = ft_strlen(str);
	d = c;
	while (str[i] != d && i > 0)
		i--;
	if (d == str[i])
		return (&str[i]);
	return (NULL);
}
