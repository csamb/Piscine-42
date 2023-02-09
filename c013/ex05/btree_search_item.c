/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:12:20 by csamb             #+#    #+#             */
/*   Updated: 2023/02/08 12:14:02 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
			int (*cmpf)(void *, void *))
{
	void	*left;
	void	*right;

	left = btree_search_item(root->left, data_ref, cmpf);
	if (root && left)
		return (left);
	if (root && cmpf(data_ref, root->item) == 0)
		return (root->item);
	right = btree_search_item(root->right, data_ref, cmpf);
	if (root && right)
		return (right);
	return (NULL);
}
