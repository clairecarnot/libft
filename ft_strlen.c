/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:47:33 by ccarnot           #+#    #+#             */
/*   Updated: 2023/06/02 11:57:46 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*************************************************************
 *  Function: strlen
 *  Library: <string.h>
 *  Description: Calculates the length of a string.
 *  Memory allocations: None
 *  Crash values: When s is NULL (unprotected)
 *  Return values: the length of the string as a size_t value.
 ************************************************************/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
