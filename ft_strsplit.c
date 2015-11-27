/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:17:08 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/27 04:44:43 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc(1);
	str[0] = malloc(1);
	if (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
		{
			ft_putchar('\n');
			i++;
		}
		i++;
		ft_putchar(s[i]);
	}
	return (str);
}

int	main(void)
{
	ft_strsplit("*Hello***Ceci*Est***un**test***:", '*');
	return (0);
}
