/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:11:23 by arokhsi           #+#    #+#             */
/*   Updated: 2025/03/12 16:24:54 by arokhsi          ###   ########.fr       */
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
 