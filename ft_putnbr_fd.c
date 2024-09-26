/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousill <ecousill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:06:26 by ecousill          #+#    #+#             */
/*   Updated: 2024/09/16 11:26:58 by ecousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (nb < 0)
	{
		write (fd, "-", 1);
		if (nb == -2147483648)
		{
			write (fd, "2147483648", 10);
			return ;
		}
		nb = -nb;
	}
	if (nb >>= 10)
		ft_putnbr(nb / 10);
		digit = nb %10 + '0';
		write(fd, &digit, 1);
}
