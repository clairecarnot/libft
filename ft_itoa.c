/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 09:45:09 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/15 18:09:15 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: ft_itoa
 * Description: allocates and returns a string representing the integer received as an argument
 * Memory allocations:
 *      - 1 malloc, 0 free
 * Crash values: None
 * Return value: 
 *   - The string representing the integer
 *   - NULL if the memory allocation fails
 *******************************************/

static int	ft_countn(int nb)
{
	int	i;
	long int	n;

	n = nb;
	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*d;
	int			i;

	nb = n;
	d = malloc(sizeof(char) * (ft_countn(n) + 1));
	if (!d)
		return (0x0);
	if (n < 0)
		nb = -nb;
	i = ft_countn(n);
	d[i--] = '\0';
	while (i >= 0)
	{
		d[i] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
	if (n < 0)
		d[0] = '-';
	return (d);
}
