#include <stdio.h>

int	ft_numeric(char c)
{
	return((c >= 'a' && c <= 'z') || 
		(c >= 'A' && c <= 'Z')  ||
		(c >= '0' && c <= '9'));
}

int	ft_lowcase(char c)
{
	return((c >= 'a' && c <= 'z'));
}

int	ft_upcase(char c)
{
	return((c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int i = 0;
	int flag = 1;

	while(str[i])
	{
		if(ft_numeric(str[i]))
		{
			if(flag && ft_lowcase(str[i]))
				str[i] -= 32;
			else if(!flag && ft_upcase(str[i]))
				str[i] += 32;
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}
