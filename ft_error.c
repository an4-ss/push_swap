/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:43:57 by arokhsi           #+#    #+#             */
/*   Updated: 2025/03/11 12:01:40 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(int msg)
{
	if (msg == 1)
		write(2, "ERROR : doubled number\nww", 23);
	if (msg == 2)
		write(2, "ERROR : found a number outRange INT\n", 36);
	else if (msg == 3)
		write(2, "EROOR : none integer arguments\n", 31);
}
