/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:01:45 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/05 12:06:44 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: tolower
 * Library: <ctype.h>
 * Description: converts uppercase characters to lowercase
 * Memory allocations: None
 * Crash values: None
 * Return value:
 *      - converted lowercase character
 *      - or the input character if the conversion was not possible
 *******************************************/

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	return (c);
}
