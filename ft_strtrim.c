/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 09:44:11 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/15 18:05:56 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: ft_strtrim
 * Description: allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string
 * Memory allocations:
 *      - 1 malloc, 0 free
 * Crash values: None
 * Return value: 
 *   - Pointer to the new string
 *   - NULL if s1 or set is NULL, or if the memory allocation fails
 *******************************************/

static int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*d;

	i = 0;
	if (!s1 || !set)
		return (0x0);
	while (s1[i] && ft_isset(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_isset(s1[j], set))
		j--;
	d = malloc(sizeof(char) * (j - i + 2));
	if (!d)
		return (0x0);
	k = 0;
	while (i <= j)
	{
		d[k] = s1[i];
		k++;
		i++;
	}
	d[k] = '\0';
	return (d);
}
