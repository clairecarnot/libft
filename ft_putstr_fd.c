/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:25:24 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/15 14:30:31 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: ft_putstr_fd
 * Description: outputs the string ’s’ to the given file descriptor 
 * Memory allocations: None
 * Crash values:
 *      - fd is not valid (unprotected)
 *      - s is NULL (protected)
 * Return value: None
 *******************************************/

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
