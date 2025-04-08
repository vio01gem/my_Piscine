/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:11:51 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/26 20:32:41 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*array;

	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (0);
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*check;

	min = 30;
	max = 20;
	i = 0;
	check = ft_range(min, max);
	while (min < max)
	{
		printf("%d ", check[i]);
		i++;
		min++;
	}
}
