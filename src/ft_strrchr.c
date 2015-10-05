#include "../libft.h"

char	*ft_strrchr(char *str, char c)
{
	int i;

	i = ft_strlen(str);
	while (i >= 0 && str[i] != c)
		i--;
	if (str[i]== c)
		return (&str[i]);
	return (NULL);
}
