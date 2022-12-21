/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_double_list_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:42:27 by roaraujo          #+#    #+#             */
/*   Updated: 2022/01/25 13:50:33 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dbl_list_i	*ft_dbl_lst_i_new(int content)
{
	t_dbl_list_i	*newitem;

	newitem = malloc(sizeof(t_dbl_list_i));
	newitem->content = content;
	newitem->prev = NULL;
	newitem->next = NULL;
	return (newitem);
}

int	ft_dbl_lst_i_size(t_dbl_list_i *lst)
{
	int	count_items;

	if (lst == NULL)
		return (0);
	count_items = 1;
	while (lst->next != NULL)
	{
		count_items++;
		lst = lst->next;
	}
	return (count_items);
}

t_dbl_list_i	*ft_dbl_lst_i_last(t_dbl_list_i *lst)
{
	t_dbl_list_i	*pivot;

	if (lst == NULL)
		return (NULL);
	pivot = lst;
	while (pivot->next != NULL)
		pivot = pivot->next;
	return (pivot);
}

t_dbl_list_i	*ft_dbl_lst_i_first(t_dbl_list_i *lst)
{
	t_dbl_list_i	*pivot;

	if (lst == NULL)
		return (NULL);
	pivot = lst;
	while (pivot->prev != NULL)
		pivot = pivot->prev;
	return (pivot);
}
