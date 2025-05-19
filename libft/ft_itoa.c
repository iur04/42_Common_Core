/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:07:35 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/10 12:04:25 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Calcula quantos caracteres serão necessários para representar o número;
static int	num_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

//Converte um inteiro para string
//(requer lidar com números negativos, zero e alocação dinâmica).
char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = num_len(n);
	str = malloc(sizeof(char) * (len + 1));
	nb = n;
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	else if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		len--;
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

/* int main()
{
	int i = -2;
	int x = 0;
	int y = -0;
	int z = 2;
	int j = '\0';

	printf("%s\n", ft_itoa(i));
	printf("%s\n", ft_itoa(x));
	printf("%s\n", ft_itoa(y));
	printf("%s\n", ft_itoa(z));
	printf("%s\n", ft_itoa(j));
} */
