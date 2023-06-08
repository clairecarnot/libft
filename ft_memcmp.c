/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:05:39 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/11 17:30:30 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: memcmp
 * Library: <string.h>
 * Description: compares at most n bytes between two memory blocks s1 and s2
 * Memory allocations: None
 * Crash values:
 * 	- n != 0 AND {s1 and/or s2 is NULL}
 * Return value: 
 * 	- an  integer  less  than,  equal  to,  or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2.
 *******************************************/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*m1;
	unsigned char	*m2;

	m1 = (unsigned char *) s1;
	m2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (m1[i] != m2[i])
			return (m1[i] - m2[i]);
		i++;
	}
	return (0);
}
