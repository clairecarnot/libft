/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:24:44 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/11 11:13:39 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: strlcpy
 * Library: <string.h>
 * Description: copies a string into a destination buffer, ensuring null termination and preventing buffer overflow.
 * Memory allocations: None
 * Crash values:
		- dst buffer size < size (unprotected)
		- size != 0 AND {src or dst is NULL} (unprotected)
 * Return value: The length of the source string
 *******************************************/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
