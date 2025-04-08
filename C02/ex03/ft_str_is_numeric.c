/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:48:09 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/17 14:08:16 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)

{
	int	i;
	int	check;

	i = 0;
	check = 1;
	if (str[i] == '\0')
	{
		return (check);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
		if (str[i] == '\0')
		{
			return (check);
		}
	}
	check = 0;
	return (check);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("7777"));
// }
