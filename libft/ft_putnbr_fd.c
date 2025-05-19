/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:16:27 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/09 17:56:29 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//escreve um número inteiro.
void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(nb * -1, fd);
	}
	else if (nb < 10)
	{
		ft_putchar_fd((char)(nb + '0'), fd);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
}

/* int main()
{
    ft_putnbr_fd(-56789, 1);
    printf("\n");
    ft_putnbr_fd(1234, 1);
    printf("\n");
    ft_putnbr_fd(0, 1);
    printf("\n");
    ft_putnbr_fd(-2147483648, 1);
    printf("\n");
    ft_putnbr_fd(2147483647, 1);
    printf("\n");
} */
