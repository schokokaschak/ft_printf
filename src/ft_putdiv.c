/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdiv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:28:32 by akashets          #+#    #+#             */
/*   Updated: 2023/01/02 12:12:32 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"
#include	"libft.h"

int	ft_putstring_n(char *s)
{
	int		i;
	char	*str;

	i = 0;
	if (s == NULL)
	{
		str = "(null)";
		ft_putstring_n(str);
		return (6);
	}
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_printper(void)
{
	write (1, "%", 1);
	return (1);
}

int	ft_putnumber_n(int n)
{
	int		i;
	char	*s;

	i = 0;
	s = ft_itoa(n);
	i = ft_putstring_n(s);
	free(s);
	return (i);
}
