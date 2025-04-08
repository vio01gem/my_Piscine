/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:46:30 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/19 11:26:53 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start ++;
		end --;
	}
}

// int	main(void)
// {
// 	int	i;
// 	int	size;

// 	i = 0;
// 	int	array[6] = {1, 2, 3, 4, 5, 6};
// 	size = 6;
// 	printf("forward: ");
// 	while (i <= 5)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	ft_rev_int_tab(array, size);
// 	printf("reverse: ");
// 	while (i <= 5)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// }
