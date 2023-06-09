/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:42:49 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/15 14:32:04 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: ft_putendl_fd
 * Description: outputs the string ’s’ to the given file descriptor followed by a newline
 * Memory allocations: None
 * Crash values:
 *      - fd is not valid (unprotected)
 *      - s is NULL (protected)
 * Return value: None
 *******************************************/

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
