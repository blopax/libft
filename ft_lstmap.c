/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:10:13 by pclement          #+#    #+#             */
/*   Updated: 2017/11/16 18:55:29 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh_lst;
	t_list	**a_fresh_lst;
//	t_list	*reverse_list;
//	t_list	**a_reverse_list;

	a_fresh_lst = &fresh_lst;
	while (lst)
	{
		ft_lstadd(a_fresh_lst, f(lst));
		lst = lst->next;
	}

//	a_reverse_list = &reverse_list;


	return (fresh_lst);
}

//utiliser lstnew
