/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 11:05:16 by akashets          #+#    #+#             */
/*   Updated: 2023/01/03 12:18:27 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_putchar_n(int c);
int		ft_check(va_list args, const char str);
int		ft_putstring_n(char *s);
int		ft_printper(void);
int		ft_putnumber_n(int n);
int		ft_hexlen(long n);
void	ft_printhex(long long n, char format);
int		ft_puthex(unsigned int n, char format);
int		ft_putnumber_u(long long n);
char	*ft_uitoa(long long n);
int		ft_printp(unsigned long long n);
int		ptrlen(uintptr_t n);
void	printptr(uintptr_t n);

#endif
