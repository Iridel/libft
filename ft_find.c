/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhill <dhill@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 22:20:19 by dhill             #+#    #+#             */
/*   Updated: 2017/07/05 23:31:13 by dhill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
