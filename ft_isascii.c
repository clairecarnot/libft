/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:21:12 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/03 14:09:48 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: isascii
 * Library: <ctype.h>
 * Description: Checks if a character is a standard ASCII character (0 to 127).
 * Memory allocations: None
 * Crash values: None
 * Return values:
 *   - Non-zero (typically 1) if the character is a standard ASCII character.
 *   - 0 otherwise
 *******************************************/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
