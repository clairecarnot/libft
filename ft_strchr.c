/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:11:31 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/11 18:18:37 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: strchr
 * Library: <string.h>
 * Description: searches for the first occurrence of a specific character in a string
 * Memory allocations: None
 * Crash values:
 * 	- s is NULL (unprotected)
 * Return value: 
 * 	- pointer to the first occurrence of the character in the string
 * 	- NULL if the character is not found
 *******************************************/

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = c;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i++;
	}	
	return (0x0);
}
