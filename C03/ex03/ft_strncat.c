char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *s = dest;
	unsigned int i = 0;

	while(*s)
		s++;
	while(i < nb && *src)
	{
		*s++ = *src++;
		i++;
	}
	*s = '\0';
	
	return (dest);
}
