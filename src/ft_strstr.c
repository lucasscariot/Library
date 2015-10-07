#include "../libft.h"

char	*ft_strstr(char *str, char *c)
{
	int i;
	int j;
	int r;

	i = 0;
	j = 0;
	while (c[j] != '\0')
	{
		while (str[i] != '\0' && str[i] != c[j])
			i++;
		r = i;
		while (str[i] == c[j])
		{
			i++;
			j++;
		}
		if (c[j] == '\0')
			return (&str[r]);
		if (str[i] == '\0')
			return (NULL);
		i = r + 1;
		j = 0;
	}
	return (NULL);
}
