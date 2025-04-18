/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:01:25 by arokhsi           #+#    #+#             */
/*   Updated: 2025/04/11 16:26:12 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_ps
{
	int		*arr_a;
	int		*arr_b;
	size_t	size_a;
	size_t	size_b;
}	t_ps;

void	ft_putstr(char *str);
long	ft_atol(char *str);
t_ps	*ft_init(size_t argc, char **argv);
int		ft_check_duplicated(int *arr, size_t size);
int		is_number(char c);
int		is_sign(char c);
int		ft_is_sorted(int *arr, size_t size);
size_t	get_min_nbr_i(int *arr, size_t size);
size_t	get_max_nbr_i(int *arr, size_t size);
int		get_nth_largest(int *arr, size_t size, int max);
int		ft_fill_arr(t_ps *arr, size_t count, char **buffer);
size_t	ft_get_arr_size(size_t count, char **buffer);
size_t	process_number(char *str, size_t *j, size_t *size);
int		process_and_store_number(char *str, size_t *j, t_ps *arr, size_t *a);
void	pa(t_ps *arr);
void	pb(t_ps *arr);
void	sa(t_ps *arr);
void	sb(t_ps *arr);
void	ra(t_ps *arr);
void	rb(t_ps *arr);
void	rrb(t_ps *arr);
void	rra(t_ps *arr);
void	chunk_sort(t_ps *arr);
void	selection_sort(t_ps *arr);
void	tiny_sort(t_ps *arr);
void	sortfive(t_ps *arr);
void	ft_exit(t_ps *arr);

#endif