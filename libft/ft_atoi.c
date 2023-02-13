/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsbur      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:57:32 by akashets          #+#    #+#             */
/*   Updated: 2022/12/15 16:38:55 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	int		k;

	k = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\f' || *str == '\r' || *str == '\v')
		str++;
	if (*str == '-')
	{
		k = -1;
		str++;
	}		
	else if (*str == '+')
		str++;
	i = 0;
	while (*str && (*str >= '0' && *str <= '9'))
	{	
		if (i == 0)
			i = *str - 48;
		else
			i = (i * 10) + (*str - 48);
		str++;
	}
	return (i * k);
}
