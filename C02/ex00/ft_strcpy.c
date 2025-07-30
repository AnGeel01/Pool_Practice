char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;

	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char dest[100];
	char src[] = "adblah";

	ft_strcpy(dest, src);
	printf("%s", dest);
}*/
