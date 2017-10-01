/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhill <dhill@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 18:58:55 by dhill             #+#    #+#             */
/*   Updated: 2017/10/01 00:59:26 by dhill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strjoin but for fixed sizes;
*/

char	*ft_strnjoin(char const *s1, char const *s2, size_t x, size_t y)
{
	char	*newstr;
	size_t	i;
	size_t	i2;

	if (!s1 || !s2)
		return (NULL);
	newstr = ft_strnew(x + y);
	if (!newstr)
		return (NULL);
	i = 0;
	i2 = 0;
	while (i < x)
	{
		newstr[i] = s1[i];
		i++;
	}
	while (i < (x + y))
	{
		newstr[i] = s2[i2];
		i++;
		i2++;
	}
	return (newstr);
}
