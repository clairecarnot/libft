/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:57:35 by ccarnot           #+#    #+#             */
/*   Updated: 2023/06/02 14:32:38 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/********************************************************************************************
 *  Function: memcpy
 *  Library: <string.h>
 *  Description: copies  n bytes from memory area src to memory area dest.  
	The memory areas must not overlap (otherwise: memmove)
 *  Memory allocations: None
 *  Crash values:
			n != 0 AND {src OR dest is NULL} (unprotected)
			n < 0 (unprotected)
 *  Return values
			A pointer to the destination memory area
			NULL if src AND dest are NULL (protected)
 ********************************************************************************************/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (0x0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
