/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtice <mtice@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:13:59 by mtice             #+#    #+#             */
/*   Updated: 2025/07/08 01:37:34 by mtice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

// int main(void)
// {
// 	t_list *lst = ft_lstnew((void *)strdup("hello"));
// 	t_list	*last = ft_lstnew((void *)strdup("world"));
//
// 	ft_lstadd_back(&lst, last);
// 	printf("lst:%s last:%s\n", (char *)lst->content,
// 	(char *)lst->next->content);
// 	free(lst->content);
// 	free(lst);
// 	free(last->content);
// 	free(last);
// 	return (0);
// }
