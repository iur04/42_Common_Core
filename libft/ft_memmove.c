/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:46:41 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/09 16:22:44 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Parecido com memcpy, mas funciona com overlap
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;

	i = 0;
	if (dest == src)
		return (dest);
	if (dest < src)
	{
		while (i < n)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((unsigned char *)dest + n - 1) = *((unsigned char *)src + n - 1);
			n--;
		}
	}
	return (dest);
}

/* int	main()
{
	char str[] = "Chimichurri";

	printf("Result: %s\n", ft_memmove(str, str + 3, 3));
	printf("Result: %s\n", memmove(str, str + 3, 3));
	return (0);
} */
