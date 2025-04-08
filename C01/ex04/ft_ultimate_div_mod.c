/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:40:47 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/19 11:21:33 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	m;

	d = *a / *b;
	m = *a % *b;
	*a = d;
	*b = m;
}

int	main(void)
{
	int	x;
	int	y;
	int	*dvv;
	int	*mdd;

	dvv = &x;
	mdd = &y;
	x = 9;
	y = 4;
	ft_ultimate_div_mod(dvv, mdd);
	printf("a = %i, b = %i", x, y);
}
