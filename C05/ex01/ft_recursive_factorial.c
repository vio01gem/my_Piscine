/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:29:26 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/24 16:57:41 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		i *= nb * ft_recursive_factorial(nb - 1);
	}
	if (nb < 0)
		return (0);
	return (i);
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(3));
// }
