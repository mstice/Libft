/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtice <mtice@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:13:33 by mtice             #+#    #+#             */
/*   Updated: 2025/07/08 01:27:25 by mtice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		n;

	temp = lst;
	n = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
