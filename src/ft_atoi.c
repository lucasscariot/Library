/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/04 13:03:14 by lucas             #+#    #+#             */
/*   Updated: 2015/11/23 12:27:17 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int si;
	int nb;
	int i;

	si = 0;
	nb = 0;
	i = 0;
	if (str[i] == '-')
		si = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (int)str[i] - '0' + nb * 10;
		i++;
	}
	if (si == 1)
		nb = -nb;
	return (nb);
}
