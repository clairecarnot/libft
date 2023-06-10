/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 08:37:31 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/15 08:37:33 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: ft_lstnew
 * Description: allocates and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL
 * Memory allocations: 1 malloc, 0 free
 * Crash values: None
 * Return value: the new node
 *******************************************/

t_list	*ft_lstnew(void *content)
{
	t_list	*d;

	d = malloc(sizeof(t_list));
	if (!d)
		return (0x0);
	d->content = content;
	d->next = 0x0;
	return (d);
}
