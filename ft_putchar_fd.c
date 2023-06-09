/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:35:49 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/10 12:21:12 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: ft_putchar_fd
 * Description: outputs the character ’c’ to the given file descriptor
 * Memory allocations: None
 * Crash values:
 * 	- fd is not valid
 * Return value: None
 *******************************************/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
