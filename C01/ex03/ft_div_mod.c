/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:55:55 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/12 11:30:40 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;
// 	int	*abc;
// 	int	*def;

// 	abc = &div;
// 	def = &mod;
// 	a = 9;
// 	b = 4;
// 	ft_div_mod(a, b, abc, def);
// 	printf("div = %i, mod = %i", div, mod);
// }
