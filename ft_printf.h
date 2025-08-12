/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:11:46 by maudiffr          #+#    #+#             */
/*   Updated: 2023/01/02 11:16:12 by maudiffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_conversion(va_list args, const char format);
int		ft_printputchar(int c);
int		ft_printputstr(char *str);
int		ft_printnbr(int n);
int		ft_ucount(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_printunbr(unsigned int n);
int		ft_hexcount(unsigned int n);
void	ft_recurshex(unsigned int n, const char format);
int		ft_printhex(unsigned int n, const char format);
int		ft_pcount(unsigned long long n);
void	ft_recursp(unsigned long long n);
int		ft_printp(unsigned long long ptr);

#endif
