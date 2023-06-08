/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 09:43:54 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/15 15:59:06 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: calloc
 * Library: <stdlib.h>
 * Description: allocates memory for an array of nmemb elements of size bytes, initializing all bytes to zero.
 * Memory allocations:
 * 	- 1 alloc, 0 free
 * Crash values:
 * Return value: 
 *   - Pointer to the allocated memory block
 *   - NULL if the memory allocation fails
 *******************************************/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;
	int		bytes;

	bytes = (int)(nmemb * size);
	if (size)
	{
		if ((size_t)bytes / size != nmemb)
			return (0x0);
	}
	dest = malloc(nmemb * size);
	if (!dest)
		return (0x0);
	ft_bzero(dest, nmemb * size);
	return (dest);
}
