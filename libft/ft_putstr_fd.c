/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkosolap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 16:03:17 by dkosolap          #+#    #+#             */
/*   Updated: 2016/11/23 16:04:23 by dkosolap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	char	c;
	int		i;

	i = 0;
	if (s == 0)
		return ;
	while (s[i])
	{
		c = s[i];
		write(fd, &c, 1);
		i++;
	}
}
