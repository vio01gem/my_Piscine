/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:26:45 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/21 07:48:42 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

// // int	main(void)
// // {
// // 	char			str1[] = "cars";
// // 	char			str2[] = "cats";
// // 	unsigned int	n;

// // 	n = 3;
// // 	printf("%i\n", ft_strncmp(str1, str2, n));
// // 	printf("%i", strncmp(str1, str2, n));
// }
