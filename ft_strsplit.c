/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:17:08 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/28 09:38:33 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_split_count(char const *s, char c)
{
	int		word;
	int		i;

	i = 0;
	word = 1;
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
	str = malloc(sizeof(char *) * word);
	if (!str)
		return (0);
	while (word--)
	{
		while (*s == c && *s != '\0')
			s++;
		if (str[i] != NULL)
			str[i] = ft_strsub(s, 0, ft_split_len(s, c));
		else
			return (NULL);
		s = s + ft_split_len(s, c);
		i++;
	}
	return (str);
}
