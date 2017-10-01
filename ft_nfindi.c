/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhill <dhill@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 22:20:19 by dhill             #+#    #+#             */
/*   Updated: 2017/09/30 22:27:09 by dhill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** finds the first occurrence of the string find in str up to n bytes.
** it returns the index of the first char find
*/

int		ft_nfindi(const char *str, const char *find, size_t n)
{
	int 	len;
	size_t	i;

	i = 0;
	len = ft_strlen(find);
	if (len != 0 && *str)
	{
		while (ft_strncmp(&str[i], find, len) != 0)
		{
			if (i == n)
				return (-1);
			i++;
		}
		return (i);
	}
	else
		return (-1);
}
