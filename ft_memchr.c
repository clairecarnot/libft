/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:28:26 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/10 17:14:18 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: memchr
 * Library: <string.h>
 * Description: searches for the first occurrence of a specific byte in a memory block.
 * Memory allocations: None
 * Crash values:
 * 	- s is NULL AND n != 0
 * Return value: 
 *   - Pointer to the first occurrence of the byte in the memory block.
 *   - NULL if the byte is not found within the specified number of bytes.
 *******************************************/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0x0);
}
