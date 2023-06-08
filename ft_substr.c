/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 09:45:33 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/16 19:47:58 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: ft_substr
 * Description: allocates and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’
 * Memory allocations:
 *      - 1 malloc, 0 free
 * Crash values:
 *      - result undefined when start < 0 or len < 0
 * Return value: 
 *   - Pointer to the extracted substring.
 *   - NULL if s is NULL or if the memory allocation fails
 *******************************************/

static size_t	ft_shortest(size_t n1, size_t n2)
{
	if (n2 < n1)
		return (n2);
	return (n1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	d_len;

	if (s == 0x0)
		return (0x0);
	if (start >= (unsigned int)ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	d_len = ft_shortest(ft_strlen(s + start), len);
	d = malloc(sizeof(char) * (d_len + 1));
	if (!d)
		return (0x0);
	d[0] = '\0';
	ft_strlcpy(d, s + start, d_len + 1);
	return (d);
}
