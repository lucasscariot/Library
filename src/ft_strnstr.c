/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:13:51 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/23 12:28:33 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(char *str, char *c, int n)
{
	int	i;
	int	j;
	int	r;
	int t;

	t = n;
	i = 0;
	j = 0;
	while (c[j] != '\0')
	{
		while (str[i] != '\0' && str[i] != c[j])
			i++;
		r = i;
		while (str[i] == c[j] && n >= 0)
		{
			i++;
			j++;
			n--;
		}
		if (c[j] == '\0' || n == 0)
			return (&str[r]);
		if (str[i] == '\0')
			return (NULL);
		i = r + 1;
		j = 0;
		n = t;
	}
	return (NULL);
}
