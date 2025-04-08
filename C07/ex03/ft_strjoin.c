/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:17:49 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/26 10:44:03 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			str[k++] = sep[j++];
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	*str[] = {"Hello", "This", "is", "42", "Abu Dhabi."};
// 	char	*sep;

// 	sep = ", ";
// 	printf("%s", ft_strjoin(0, str, sep));
// }
