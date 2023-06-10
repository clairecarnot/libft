/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 08:37:04 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/15 11:58:15 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: ft_lstadd_front
 * Description: Adds the node ’new’ at the beginning of the list
 * Memory allocations: None
 * Crash values:
 *      - lst is NULL
 *      - new is NULL
 * Return value: None
 *******************************************/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
