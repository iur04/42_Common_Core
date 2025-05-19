/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:13:32 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/07 21:56:55 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Compara dois blocos de memória
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i))
		{
			i++;
		}
		else
			return ((*((unsigned char *)s1 + i)
					- *((unsigned char *)s2 + i)));
	}
	return (0);
}

/* int	main()
{
	printf("%d\n", ft_memcmp("chimichurri", "chimix", 5));
	printf("%d\n", memcmp("chimichurri", "chimix", 5));
} */
