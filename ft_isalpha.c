/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:39:41 by ccarnot           #+#    #+#             */
/*   Updated: 2023/06/02 11:41:16 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/******************************************************************************************************
 *  Function: isalpha
 *  Library: <ctype.h>
 *  Description: Determines whether a character is alphabetic.
 *  Memory allocations: None
 *  Crash values: None
 *  Return values: Non-zero value (usually 1) if the character is alphabetic
 *			0 otherwise.
 ******************************************************************************************************/

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
