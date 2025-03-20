/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:50:23 by arokhsi           #+#    #+#             */
/*   Updated: 2025/03/12 15:01:39 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_ps *arr)
{
	int	i;
	int	tmp;

	if (arr->size_a <= 1)
		return ;
	tmp = arr->arr_a[0];
	i = 0;
	while (i < arr->size_a - 1)
	{
		arr->arr_a[i] = arr->arr_a[i + 1];
		i++;
	}
	arr->arr_a[arr->size_a - 1] = tmp;
	ft_putstr("ra\n");
}
void	rb(t_ps *arr)
{
	int	i;
	int	tmp;

	tmp = arr->arr_b[0];
	i = 0;
	while (i < arr->size_b - 1)
	{
		arr->arr_b[i] = arr->arr_b[i + 1];
		i++;
	}
	arr->arr_b[arr->size_b - 1] = tmp;
	ft_putstr("rb\n");
}
