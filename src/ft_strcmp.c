#include "../libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1 == 0 && s2 == 0)
		return (0);
	if (s1 == 0)
		return (-1);
	if (s2 == 0)
		return (1);
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
