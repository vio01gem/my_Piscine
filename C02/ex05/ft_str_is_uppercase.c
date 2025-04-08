/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:48:21 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/15 12:30:42 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	if (str[i] == '\0')
	{
		return (check);
	}
	while (str[i] >= 'A' && str[i] <= 'Z')
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
// 	printf("%d\n", ft_str_is_uppercase("AHfc"));
// }
