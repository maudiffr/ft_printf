/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:48:33 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/01 11:58:19 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	char			*str;
	unsigned char	d;

	str = (char *)s;
	d = c;
	i = 0;
	while (str[i])
	{
		if (d != str[i])
			i++;
		if (d == str[i])
			return (&str[i]);
	}
	if (str[i] == d)
		return (&str[i]);
	else
		return (NULL);
}
