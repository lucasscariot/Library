/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:16:18 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/27 01:56:09 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s)));
	if (s == NULL || f == NULL || str == NULL)
		return (NULL);
	while (s[i] != '\0' && *s)
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	return (str);
}
