/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:17:08 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/27 17:49:24 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_split_count(char const *s, char c)
{
	int		word;
	int		i;

	i = 0;
	word = 0;
	while (*s != '\0')
	{
		if (i == 1 && *s == c)
			i = 0;
		if (i == 0 && *s != c)
		{
			i = 1;
			word++;
		}
		s++;
	}
	return (word);
}

int		ft_split_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		word;

	i = 0;
	word = ft_split_count(s, c);
	str = malloc(sizeof(char *) * word + 1);
	if (str == NULL)
		return (NULL);
	while (word--)
	{
		while (*s == c && *s != '\0')
			s++;
		str[i] = ft_strsub(s, 0, ft_split_len(s, c));
		if (str[i] == NULL)
			return (NULL);
		s = s + ft_split_len(s, c);
		i++;
	}
	return (str);
}
