/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:31:17 by csamb             #+#    #+#             */
/*   Updated: 2023/02/08 12:36:20 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

int	max(int a, int b)
{
	while (a < b)
		return (b);
	return (a);
}

int	btree_level_count(t_btree *root)
{
	int	max_l;
	int	max_r;

	if (!root)
		return (0);
	max_l = btree_level_count(root->left);
	max_r = btree_level_count(root->right);
	return (max(max_l, max_r) + 1);
}
