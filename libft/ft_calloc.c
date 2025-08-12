/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:42:35 by maudiffr          #+#    #+#             */
/*   Updated: 2022/11/21 09:42:43 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	new = malloc(size * count);
	if (new == NULL)
		return (NULL);
	ft_memset(new, 0, size * count);
	return (new);
}
