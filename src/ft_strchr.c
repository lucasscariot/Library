#include "../libft.h"

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}
