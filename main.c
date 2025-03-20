/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:04:19 by arokhsi           #+#    #+#             */
/*   Updated: 2025/03/12 15:33:04 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_ps *arr)
{
	if (arr->size_a <= 3)
		tiny_sort(arr);
	else if (arr->size_a < 20)
		selection_sort(arr);
	else
		chunk_sort(arr);
}

int main(int ac, char **av)
{
	t_ps	*arr;

	if (ac < 2)
		return (0);
	arr = ft_init(ac - 1, av + 1);
	if (!arr)
		return (1);
	ft_sort(arr);
	ft_exit(arr);
}
