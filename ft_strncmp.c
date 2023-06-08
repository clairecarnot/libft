/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:59:07 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/11 12:11:52 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: strncmp
 * Library: <string.h>
 * Description: compares at most n bytes of two strings s1 and s2.
 * Memory allocations: None
 * Crash values:
 * 	- n != 0 AND {s1 or/and s2 is NULL}
 * Return value: 
 *   - an integer less than, equal to, or greater than zero if the first n characters of the strings are found to be less than, equal to, or greater than each other, respectively.
 *******************************************/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
