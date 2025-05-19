/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:29:22 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/05 15:29:22 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Encontra a última ocorrência de um caractere
char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	x;

	x = (unsigned char)c;
	i = ft_strlen((char *)s) + 1;
	while (i--)
	{
		if (*(s + i) == x)
			return ((char *)(s + i));
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strrchr("chimiii", 'm'));
// 	printf("%s\n", strrchr("chimiii", 'm'));
// }
