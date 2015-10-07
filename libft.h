/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/04 01:54:04 by lucas             #+#    #+#             */
/*   Updated: 2015/08/25 11:36:54 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int	ft_strlen(char *str);
int	ft_atoi(char *str);
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, int n);
char	*ft_strchr(char *str, char c);
char 	*ft_strrchr(char *str, char c);
char	*ft_strstr(char *str, char *c);
char	*ft_strdup(char *str);
int	ft_tolower(int c);
int	ft_toupper(int c);
#endif
