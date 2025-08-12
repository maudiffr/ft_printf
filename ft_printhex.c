/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:19:14 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/21 13:22:40 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexcount(unsigned int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

void	ft_recurshex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_recurshex(n / 16, format);
		ft_recurshex(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_printputchar(n + '0');
		else
		{
			if (format == 'x')
				ft_printputchar(n + 87);
			if (format == 'X')
				ft_printputchar(n + 55);
		}
	}
}

int	ft_printhex(unsigned int n, const char format)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		ft_recurshex(n, format);
	return (ft_hexcount(n));
}
