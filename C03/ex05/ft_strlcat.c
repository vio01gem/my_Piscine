/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:42:07 by hajmoham          #+#    #+#             */
/*   Updated: 2024/02/21 07:53:12 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	j = dlen;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while ((src[i] != '\0') && (size > (j + 1)))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (slen + dlen);
}

// int main (void)
// {
// 	char src[] = " 42 Abu Dhabi.";
//     char dest [100] = "This is";
// 	char s1[] = " 42 Abu Dhabi.";
//     char s2 [100] = "This is";
//     printf("%i \n", ft_strlcat(dest, src, 22));
// 	printf("%lu \n", strlcat(s2, s1, 22));
//     printf("%s \n", dest);
// }
