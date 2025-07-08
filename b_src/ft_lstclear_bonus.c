/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtice <mtice@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:14:23 by mtice             #+#    #+#             */
/*   Updated: 2025/07/08 01:14:24 by mtice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	while ((*lst)->next != NULL)
	{
		del((*lst)->content);
		*lst = (*lst)->next;
	}
	free(*lst);
	*lst = NULL;
}
