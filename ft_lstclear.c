/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 09:35:17 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/15 13:58:08 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: ft_lstclear
 * Description: deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL
 * Memory allocations: None
 * Crash values: None
 * Return value: None
 *******************************************/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*tmp;

	if (lst && del)
	{
		ptr = *lst;
		while (ptr)
		{
			tmp = ptr->next;
			(*del)(ptr->content);
			free(ptr);
			ptr = tmp;
		}
		*lst = 0x0;
	}
}
