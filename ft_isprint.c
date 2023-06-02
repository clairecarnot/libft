/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:43:27 by ccarnot           #+#    #+#             */
/*   Updated: 2023/06/02 11:50:52 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*************************************************************************************
 *  Function: isprint
 *  Library: <ctype.h>
 *  Description: Determines whether a character is printable.
 *  Memory allocations: None
 *  Crash values: None
 *  Return values: Returns a non-zero value (usually 1) if the character is printable, 
			0 otherwise.
 ************************************************************************************/

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}
