/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:22:24 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/11 18:02:24 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: memmove
 * Library: <string.h>
 * Description: copies n bytes from memory area src to memory area dest.  The memory areas may overlap.
 * Memory allocations: None
 * Crash values:
	- n != 0 AND {src OR dest is NULL} (unprotected)
	- n < 0 (unprotected)
 * Return value: 
	- A pointer to the destination memory block
	- NULL if src AND dest are NULL (protected)
 *******************************************/


void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!dest && !src)
		return (0x0);
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
