/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:20:07 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/12 18:11:35 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 7;
// 	y = 11;
// 	int	*abc = &x;
// 	int	*def = &y;

// 	printf("Before = x = %i, y = %i\n", x, y);
// 	ft_swap(abc, def);
// 	printf("After = x = %i, y = %i\n", x, y);
// }
