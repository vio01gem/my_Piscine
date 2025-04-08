/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:46:47 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/13 15:54:25 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}

// int main(void)
// {
// 	int i;
// 	i = 0;
// 	int array[6] = {4, 3, 5, 6, 2, 1};
// 	printf("mixed: ");
// 	while (i < 6)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_sort_int_tab(array, 6);
// 	i = 0;
// 		printf("sorted: ");
// 	while (i < 6)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// 	return 0;
// }