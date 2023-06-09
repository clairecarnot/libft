/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:52:25 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/10 14:15:34 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: ft_putnbr_fd
 * Description: outputs the integer ’n’ to the given file descriptor
 * Memory allocations: None
 * Crash values:
 *      - fd is not valid
 * Return value: None
 *******************************************/

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = n;
	if (n < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nb < 10)
		ft_putchar_fd(nb + '0', fd);
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
}
