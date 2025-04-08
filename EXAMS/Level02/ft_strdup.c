#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char *dest;
	dest = malloc(10000);
	int i;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main()
{
	char *src = "im good";
	printf("%s\n", ft_strdup(src));
	printf("%s\n", strdup(src));
}