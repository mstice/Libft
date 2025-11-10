/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtice <mtice@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:14:23 by mtice             #+#    #+#             */
/*   Updated: 2025/07/08 01:14:24 by mtice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		del((*lst)->content);
		temp = *lst;
		*lst = (*lst)->next;
		free(temp);
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list	*l1 = ft_lstnew(strdup("hello"));
// 	t_list	*l2 = ft_lstnew(strdup("world"));
// 	t_list	*l3 = ft_lstnew(strdup("bye"));
//
// 	if (!l1 || !l2 || !l3)
// 		return (fprintf(stderr, "Memory allocation failed\n"), 1);
// 	l1->next = l2;
// 	l2->next = l3;
// 	printf("l1:%s l2:%s l3:%s\n",
// 	(char *)l1->content, (char *)l2->content, (char *)l3->content);
// 	ft_lstclear(&l1, del((void *)l2));
// 	printf("l1:%s l2:%s l3:%s\n",
// 	(char *)l1->content, (char *)l2->content, (char *)l3->content);
// 	if (l1 == NULL)
// 		printf("List has been cleared\n");
// 	return (0);
// }
