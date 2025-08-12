/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 09:33:29 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/02 11:33:31 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_countnumbers(long n)
{
	int	nb;

	nb = 0;
	if (n == 0)
		nb++;
	if (n < 0)
	{
		n *= -1;
		nb++;
	}
	while (n > 0)
	{
		n = n / 10;
		nb++;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	size_t	i;
	long	nb;
	char	*tab;

	nb = n;
	i = ft_countnumbers(nb);
	tab = malloc(sizeof(char) * (i + 1));
	if (tab == NULL)
		return (NULL);
	tab[i--] = '\0';
	if (nb == 0)
		tab[0] = 48;
	if (nb < 0)
	{
		tab[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		tab[i--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (tab);
}
