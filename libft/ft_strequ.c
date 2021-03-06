/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkosolap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 20:58:46 by dkosolap          #+#    #+#             */
/*   Updated: 2016/11/26 21:05:36 by dkosolap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	i = 0;
	if (s1 && s2)
	{
		while ((s1[i] != '\0') && (s2[i] != '\0'))
		{
			i++;
			if (s1[i] != s2[i])
				return (0);
		}
	}
	return (1);
}
