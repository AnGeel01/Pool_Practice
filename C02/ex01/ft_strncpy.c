#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while(i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
		dest[i++] = '\0';
	return (dest);
}

/*int main()
{
	char dest[100];
	char src[] = "yahya wa3r";
	unsigned int n = 3;

	ft_strncpy(dest, src, n);

	printf("%s", dest);
}*/
