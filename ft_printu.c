/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:00:36 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/21 12:18:29 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ucount(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_uitoa(unsigned int n)
{
	int		i;
	char	*tab;

	i = ft_ucount(n);
	tab = malloc(sizeof(char) * (i + 1));
	if (tab == NULL)
		return (NULL);
	tab[i--] = '\0';
	if (n == 0)
		tab[0] = 48;
	while (n != 0)
	{
		tab[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (tab);
}

int	ft_printunbr(unsigned int n)
{
	int		count;
	char	*tab;

	count = 0;
	tab = ft_uitoa(n);
	count += ft_printputstr(tab);
	free(tab);
	return (count);
}
