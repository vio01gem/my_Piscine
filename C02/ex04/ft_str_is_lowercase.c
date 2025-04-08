/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:48:16 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/15 12:29:22 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	if (str[i] == '\0')
	{
		return (check);
	}
	while (str[i] >= 'a' && str[i] <= 'z')
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
// 	printf("%d\n", ft_str_is_lowercase("adfc"));
// }
