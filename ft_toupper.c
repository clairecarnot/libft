/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:50:43 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/05 12:02:53 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: toupper
 * Library: <ctype.h>
 * Description: converts lowercase characters to uppercase
 * Memory allocations: None
 * Crash values: None
 * Return value:
 * 	- converted uppercase character
 * 	- or the input character if the conversion was not possible
 *******************************************/

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}
