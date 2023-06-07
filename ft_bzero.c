/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:42:07 by ccarnot           #+#    #+#             */
/*   Updated: 2023/06/02 13:59:18 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************************
 *  Function: bzero
 *  Library: <strings.h>
 *  Description: Fills a block of memory with zeroes.
 *  Memory allocations: None
 *  Crash values: n < 0 (unprotected)
		  s is NULL (unprotected)
 *  Return values: None
 *******************************************************/

void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		((unsigned char *)s)[n - 1] = '\0';
		n--;
	}
}
