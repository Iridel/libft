/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhill <dhill@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 17:15:08 by dhill             #+#    #+#             */
/*   Updated: 2017/10/19 18:16:32 by dhill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to the first occurance of c in
** the string s.
*/

char	*ft_strchr(const char *str, int c)
{
	while (str)
	{
		if (str == c)
			return (str);
		str++;
	}
	return (NULL);
}
