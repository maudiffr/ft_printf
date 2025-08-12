/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:51:05 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/01 14:28:35 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str;
	char	*ptr;

	str = (char *)dst;
	ptr = (char *)src;
	i = 0;
	if (!str && !ptr)
		return (NULL);
	if (str > ptr)
	{
		while (len-- > 0)
			str[len] = ptr[len];
	}
	else
	{
		while (i < len)
		{
			str[i] = ptr[i];
			i++;
		}
	}
	return (dst);
}
