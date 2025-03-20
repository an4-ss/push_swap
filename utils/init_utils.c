/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:11:22 by arokhsi           #+#    #+#             */
/*   Updated: 2025/03/08 12:30:53 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_get_arr_size(size_t count, char **buffer)
{
	size_t	i;
	size_t	j;
	size_t	size;

	size = 0;
	i = 0;
	while (i < count)
	{
		j = 0;
		while (buffer[i][j])
		{
			while (buffer[i][j] == ' ' && buffer[i][j])
				j++;
			if (issign(buffer[i][j]) && buffer[i][j])
				j++;
			if (!isnb(buffer[i][j]) && buffer[i][j])
				return (ft_error(3), 0);
			if (buffer[i][j])
				size++;
			while (isnb(buffer[i][j]) && buffer[i][j])
				j++;
		}
		i++;
	}
	return (size);
}
int	ft_fill_arr(t_ps *arr, size_t count, char **buffer)
{
	size_t			i;
	size_t			j;
	size_t			a;
	long			tmp;

	i = 0;
	a = 0;
	while (i < count)
	{
		j = 0;
		while (buffer[i][j])
		{
			while (buffer[i][j] && !is_number(buffer[i][j]) && !is_sign(buffer[i][j]))
				j++;
			if (buffer[i][j] && (is_number(buffer[i][j]) || is_sign(buffer[i][j])))
				tmp = ft_atol(&buffer[i][j]);
			if (tmp > (long) INT_MAX || tmp < (long) INT_MIN)
				return (ft_error(2), 1);
			arr->arr_a[a++] = (int) tmp;
			while (buffer[i][j] && (is_number(buffer[i][j]) || is_sign(buffer[i][j])))
				j++;
		}
		i++;
	}
	return (0);
}

int	ft_is_sorted(int *arr, size_t size)
{
	size_t	i;
	int	is_sorted;
	
	is_sorted = 1;
	if (size <= 1)
		return (is_sorted);
	i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			is_sorted = 0;
			break;
		}
		i++;
	}
	return (is_sorted);
}
int	ft_check_duplicated(int *arr, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (arr[i] < size)
	{
		j = i + 1;
		while (arr[j] < size)
		{
			if (arr[i] == arr[j])
				return (ft_error(1), 1);
			j++;
		}
		i++;
	}
	return (0);
}
