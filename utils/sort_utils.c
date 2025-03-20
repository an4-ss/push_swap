/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:11:23 by arokhsi           #+#    #+#             */
/*   Updated: 2025/03/20 23:46:16 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_bigest_nbr(int *arr, int max)
{
	int	i;
	int	j;
	int	count;
	int size;
	
	size = max;
	i = 0;
	while (i < size)
	{
		j = 0;
		count = 0;
		while (j < size)
		{
			if (arr[i] > arr[j])
				count++;
			j++;
		}
		if (count == max - 1)
			return (arr[i]);
		i++;
	}
	return (arr[i]);
}
 size_t	get_min_nbr_i(int *arr, size_t size)
{
	size_t	i;
	size_t	min_index;

	min_index = 0;
	i = 0;
	while (i < size)
	{
		if (arr[i] < arr[min_index])
			min_index = i;
		i++;
	}
	return (min_index);
}

size_t	get_max_nbr_i(int *arr, size_t size)
{
	size_t	i;
	size_t	max_index;

	max_index = 0;
	i = 0;
	while (i < size)
	{
		if (arr[i] > arr[max_index])
			max_index = i;
		i++;
	}
	return (max_index);
}
