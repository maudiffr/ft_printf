/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:12:54 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/27 11:00:46 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printputchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printputstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printpourcent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_conversion(va_list args, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_printputchar(va_arg(args, int));
	if (format == 's')
		count += ft_printputstr(va_arg(args, char *));
	if (format == 'p')
		count += ft_printp(va_arg(args, unsigned long long));
	if (format == 'd' || format == 'i')
		count += ft_printnbr(va_arg(args, int));
	if (format == 'u')
		count += ft_printunbr(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		count += ft_printhex(va_arg(args, unsigned int), format);
	if (format == '%')
		count += ft_printpourcent();
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_conversion(args, str[i + 1]);
			i++;
		}
		else
			count += ft_printputchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
