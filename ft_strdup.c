/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:54:35 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/05 19:12:42 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: strdup
 * Library: <string.h>
 * Description: returns a pointer to a new string which is a duplicate of the string s
 * Memory allocations:
 * 	- 1 malloc, 0 free
 * Crash values:
 * 	- s is NULL
 * Return value: 
 *   - Pointer to the duplicated string.
 *   - NULL if the memory allocation fails.
 *******************************************/

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dest)
		return (0x0);
	i = 0;
	while (((char *)s)[i])
	{
		dest[i] = ((char *)s)[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
