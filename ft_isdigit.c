/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:55:48 by ccarnot           #+#    #+#             */
/*   Updated: 2023/06/02 11:47:14 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/****************************************************************************************************
 *  Function: isdigit
 *  Library: <ctype.h>
 *  Description: Determines whether a character is a digit.
 *  Memory allocations: None
 *  Crash values: None
 *  Return values: a non-zero value (usually 1) if the character is a digit, 
			0 otherwise.
 ***************************************************************************************************/

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
