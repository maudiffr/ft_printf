/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:27:15 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/06 11:28:19 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;

	str = dst;
	if (!str && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*str = *(char *)src;
		str++;
		src++;
		i++;
	}
	return (dst);
}
