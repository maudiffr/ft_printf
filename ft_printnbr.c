/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:37:10 by maudiffr          #+#    #+#             */
/*   Updated: 2022/12/27 10:56:47 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int		count;
	char	*tab;

	count = 0;
	tab = ft_itoa(n);
	count += ft_printputstr(tab);
	free(tab);
	return (count);
}
