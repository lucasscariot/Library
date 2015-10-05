#include "../libft.h"

int		ft_strncmp(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	if (s1 == 0 && s2 == 0 )
		return (0);
	if (s1 == 0)
		return (-1);
	if (s2 == 0)
		return (1);
	while (i <= n && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
