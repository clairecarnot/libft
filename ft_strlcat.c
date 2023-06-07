/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2ft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:52:47 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/15 15:48:01 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: strlcat
 * Library: <string.h>
 * Description: concatenates a string onto the end of a destination buffer, ensuring null termination and preventing buffer overflow.
 * Memory allocations: None
 * Crash values: 
 * 	- src is NULL
 *	- dst is NULL AND size != 0
 * Return value:
 * 	- length of src + length of dst (total concatenated)
 * 	- if {dst is NULL AND size = 0}, return is the length of src
 * 	- if the length of dst is >= size, return is length of src + size
 *******************************************/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	if (!dst && size == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	while (i < (size - len_dst - 1) && src[i])
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
