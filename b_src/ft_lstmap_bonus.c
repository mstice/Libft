/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtice <mtice@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:15:10 by mtice             #+#    #+#             */
/*   Updated: 2025/07/08 01:16:29 by mtice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_list;
	t_list	*node;

	if (!lst || !del)
		return (NULL);
	new_list = NULL;
	node = NULL;
	temp = lst;
	while (temp != NULL)
	{
		if (f)
			node = ft_lstnew(f(temp->content));
		else
			node = ft_lstnew(temp->content);
		ft_lstadd_back(&new_list, node);
		temp = temp->next;
	}
	return (new_list);
}

// static void	del(void *content)
// {
// 	free(content);
// }
//
// static void *f(void *content)
// {
// 	char *s;
// 	int i;
//
// 	s = (char *)content;
// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] >= 'a' && s[i] <= 'z')
// 			s[i] -= 32;
// 		i++;
// 	}
// 	return ((void *)s);
// }
//
// int main(void)
// {
// 	t_list	*lst = ft_lstnew((void *)strdup("hello"));
// 	t_list	*lst1 = ft_lstnew((void *)strdup("how"));
// 	t_list	*lst2 = ft_lstnew((void *)strdup("are"));
// 	t_list	*lst3 = ft_lstnew((void *)strdup("you"));
//
// 	ft_lstadd_back(&lst, lst1);
// 	ft_lstadd_back(&lst, lst2);
// 	ft_lstadd_back(&lst, lst3);
// 	printf("BEFORE FT_LSTMAP()\n");
// 	printf("l0:%s\nl1:%s\nl2:%s\nl3:%s\n",
// 	(char *)lst->content, (char *)lst1->content, (char *)lst2->content,
// 	(char *)lst3->content);
// 	printf("AFTER FT_LSTMAP()\n");
// 	t_list *new_lst = ft_lstmap(lst, &f, &del);
// 	printf("l0:%s\nl1:%s\nl2:%s\nl3:%s\n",
// 	(char *)lst->content, (char *)lst1->content, (char *)lst2->content,
// 	(char *)lst3->content);
// 	printf("l0:%s\nl1:%s\nl2:%s\nl3:%s\n",
// 	(char *)new_lst->content, (char *)new_lst->next->content,
// 	(char *)new_lst->next->next->content, 
// 	(char *)new_lst->next->next->next->content);
// 	ft_lstclear(&lst, &del);
// 	return (0);
// }
