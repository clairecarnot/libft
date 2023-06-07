/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:14:24 by ccarnot           #+#    #+#             */
/*   Updated: 2023/06/02 13:56:29 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************************
 *  Function: memset
 *  Library: <string.h>
 *  Description: Fills a block of memory with a specified value.
 *  Memory allocations: None
 *  Crash values: n < 0 (unprotected)
		  s is NULL (unprotected)
 *  Return values: Returns a pointer to the memory area.
 *******************************************************/

void	*ft_memset(void *s, int c, size_t n)
{
	while (n > 0)
	{
		((unsigned char *)s)[n - 1] = c;
		n--;
	}
	return (s);
}
