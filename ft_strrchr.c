/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:15:01 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/26 15:08:44 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, char c)
{
	int i;

	i = ft_strlen(str);
	while (i >= 0 && str[i] != c)
		i--;
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}
