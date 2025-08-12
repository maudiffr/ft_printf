/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:22:57 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/27 10:57:23 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pcount(unsigned long long n)
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

void	ft_recursp(unsigned long long n)
{
	if (n >= 16)
	{
		ft_recursp(n / 16);
		ft_recursp(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_printputchar(n + 48);
		else
			ft_printputchar(n + 87);
	}
}

int	ft_printp(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	if (ptr == 0)
		count += write(1, "0", 1);
	else
	{
		ft_recursp(ptr);
		count += ft_pcount(ptr);
	}
	return (count);
}
