/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:56:22 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/26 20:25:49 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
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
		return (-1);
	i = 0;
	*range = array;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (size);
}

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*check;

	max = 1234;
	min = 1300;
	i = 0;
	printf("%d ", ft_ultimate_range(&check, min, max));
}
