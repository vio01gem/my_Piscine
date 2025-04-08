/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:12:19 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/24 17:02:53 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (power > 0)
	{
		i *= nb * ft_recursive_power(nb, power - 1);
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_power(2, 4));
// }
