/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:05:18 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/12 11:56:42 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: strnstr
 * Library: <string.h>
 * Description: locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.
 * Memory allocations: None
 * Crash values:
 * 	- little is NULL
 * 	- big is NULL AND len is != 0
 * Return value: 
 *   - Pointer to the first occurrence of the substring within the string
 *   - NULL if the substring is not found within the given length
 *******************************************/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < len && big[i] && little[j])
	{
		j = 0;
		while (i + j < len && big[i + j] && big[i + j] == little[j])
			j++;
		if (little[j])
			i++;
	}
	if (little[j])
		return (0x0);
	return ((char *)&big[i]);
}
