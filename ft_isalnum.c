/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:39:41 by ccarnot           #+#    #+#             */
/*   Updated: 2023/06/02 11:48:37 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************************8************************************************
 *  Function: isalnum
 *  Library: <ctype.h>
 *  Description: Determines whether a character is alphanumeric.
 *  Memory allocations: None
 *  Crash values: None
 *  Return values: a non-zero value (usually 1) if the character is alphanumeric,
			0 otherwise.
 ********************************************************************************************************/

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}
