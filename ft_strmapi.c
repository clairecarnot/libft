/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 09:54:46 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/10 11:13:42 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: ft_strmapi
 * Description: Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string resulting from successive applications of ’f’
 * Memory allocations:
 *      - 1 malloc, 0 free
 * Crash values:
 * 	- (*f) is NULL
 * Return value: 
 *   - The string representing the integer
 *   - NULL if s is NULL or if the memory allocation fails
 *******************************************/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*d;
	unsigned int	i;

	i = 0;
	if (!s)
		return (0x0);
	d = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!d)
		return (0x0);
	while (s[i])
	{
		d[i] = (*f)(i, s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}
