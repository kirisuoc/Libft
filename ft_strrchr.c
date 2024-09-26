/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousill <ecousill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:56:59 by ecousill          #+#    #+#             */
/*   Updated: 2024/09/13 16:15:17 by ecousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;
	char		*str;

	str = (char *)s;
	last_occurrence = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			last_occurrence = s;
		str++;
	}
	if (*str == (char)c)
		last_occurrence = str;
	return ((char *)last_occurrence);
}
