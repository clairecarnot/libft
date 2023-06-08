/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:27:40 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/05 18:56:01 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: atoi
 * Library: <stdlib.h>
 * Description: converts the initial portion of the string pointed to by nptr to int
 * Memory allocations: None
 * Crash values:
 * 	- nptr is NULL 
 * Return values:
 * 	- the converted integer value
 * 	- 0 if the input string cannot be converted
 *******************************************/

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	n;

	n = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == 32)
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			sign *= (-1);
		i++;
	}
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		n = n * 10 + nptr[i] - '0';
		i++;
	}
	return (n * sign);
}
