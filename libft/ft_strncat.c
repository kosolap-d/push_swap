/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkosolap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:31:20 by dkosolap          #+#    #+#             */
/*   Updated: 2016/11/25 17:33:29 by dkosolap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	j = 0;
	p = (char*)s2;
	while (s1[i])
		i++;
	while (s2[j] && j < n)
	{
		s1[i++] = s2[j++];
	}
	s1[i] = '\0';
	return (s1);
}
