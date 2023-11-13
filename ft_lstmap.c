/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:16:03 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/27 18:16:20 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.

// lst: The address of a pointer to a node.
// f: The address of the function used to iterate on
// the list.
// del: The address of the function used to delete
// the content of a node if needed.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	new = ft_lstnew(f(lst->content));
	if (!new)
	{
		ft_lstdelone(new, del);
		return (NULL);
	}
	temp = new;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = ft_lstnew(f(lst->content));
		if (!temp->next)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		temp = temp->next;
	}
	return (new);
}
// //function that changes the content of the old list
// //to the new one

// void	*change_status(void *content)
// {
// 	content = ft_strdup("onepiece");
// 	return (content);
// }
// //function free content
// void	free_content(void *content)
// {
// 	free(content);
// }
// int	main()
// {
// 	t_list	*node1 = ft_lstnew("david");
// 	t_list	*node2 = ft_lstnew("diogo");
// 	t_list	*node3 = ft_lstnew("anton");
// 	t_list	*node4 = ft_lstnew("fabio");
// 	t_list	*new_list;
// 	t_list	*temp;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	new_list = ft_lstmap(node1, change_status, free_content);
// 	temp = new_list;
// 	while (temp != NULL)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstclear(&new_list, free);
// 	return 0;
// }