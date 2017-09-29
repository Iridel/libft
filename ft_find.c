/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhill <dhill@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 22:20:19 by dhill             #+#    #+#             */
/*   Updated: 2017/09/26 22:52:23 by dhill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** finds the first occurrence of the string find in in the string str.
** it returns the index of the first char find
*/

int		ft_find(const char *str, const char *find)
{
	int len;
	int i;

	i = 0;
	len = ft_strlen(find);
	if (len != 0 && ft_strlen(str) != 0)
	{
		while (ft_strncmp(&str[i], find, len) != 0)
		{
			if (str[i] == '\0')
				return (-1);
			i++;
		}
		return (i);
	}
	else
		return (-1);
}
