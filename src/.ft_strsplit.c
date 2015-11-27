/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:59:07 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/26 14:36:16 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	if (*s == '\0' || s == NULL)
		return (NULL);
	if (s[i] == c)
		i++;
	str = malloc(sizeof(char*) * 1000);
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
		{
			str[j++][k] = '\0';
			l = i;
			while (s[l] != c)
				l++;
			str[j] = malloc(sizeof(char) * l + 1);
			k = 0;
		}
		else
			str[j][k++] = s[i++];
	}
	return (str);
}

int		main(void)
{
	char	**str;
	int		i;

	i = 0;
	str = ft_strsplit("ceci*est*un*test", '*');
	while (str[1][i++] != '\0')
		ft_putchar(str[2][i]);
	return (0);
}
