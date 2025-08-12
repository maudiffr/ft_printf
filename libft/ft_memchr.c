/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:26:14 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/01 12:44:11 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	d;
	unsigned char	*str;

	str = (unsigned char *)s;
	d = c;
	i = 0;
	if (n == 0)
		return (NULL);
	if (n == 1 && d == str[i])
		return (&str[i]);
	while (i < n - 1)
	{
		if (d != str[i])
			i++;
		if (d == str[i])
			return (&str[i]);
	}
	return (NULL);
}
