/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 13:31:27 by akashets          #+#    #+#             */
/*   Updated: 2023/01/03 11:18:56 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_putchar_n(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_check(va_list args, const char str)
{
	int	i;

	i = 0;
	if (str == 'c')
		i += ft_putchar_n(va_arg(args, int));
	else if (str == 's')
		i += ft_putstring_n(va_arg(args, char *));
	else if (str == 'p')
		i += ft_printp(va_arg(args, unsigned long long));
	else if (str == 'd' || str == 'i')
		i += ft_putnumber_n(va_arg(args, int));
	else if (str == 'u')
		i += ft_putnumber_u(va_arg(args, unsigned int));
	else if (str == 'x' || str == 'X')
		i += ft_puthex(va_arg(args, unsigned int), str);
	else if (str == '%')
		i += ft_printper();
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		k;
	va_list	args;

	i = 0;
	k = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			k += ft_check(args, str[i + 1]);
			i++;
		}
		else
			k += ft_putchar_n(str[i]);
		i++;
	}
	va_end(args);
	return (k);
}
// int main() */
// { */
//     ft_printf("Das ist ein Test%p", ); */
//     printf("\n"); */
//     printf("Das ist ein Test%p", 4294967295); */
//     return (0); */
// } */
