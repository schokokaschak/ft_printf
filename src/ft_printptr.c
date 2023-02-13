/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:00:17 by akashets          #+#    #+#             */
/*   Updated: 2023/01/03 12:17:56 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"
#include	"libft.h"

int	ptrlen(uintptr_t n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

void	printptr(uintptr_t n)
{
	if (n >= 16)
	{
		printptr(n / 16);
		printptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd(n + '0', 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_printp(unsigned long long n)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		printptr(n);
		len += ptrlen(n);
	}
	return (len);
}
