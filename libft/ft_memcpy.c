/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:29:04 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/08 16:53:05 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copia n bytes de uma área para outra (sem overlap)
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest2;
	unsigned char		*src2;

	i = 0;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}

/* int main()
{
	char src[] = "Chimichurri";
	char dest[15];

	ft_memcpy(dest, src, 5);

	printf("Source: %s\n", src);  // Original
	printf("Dest after ft_memcpy: %s\n", dest);  // Copiado

	char dest2[15];
	memcpy(dest2, src, 5);
	printf("Dest (standard version memcpy): %s\n", dest2);

	return 0;
}
 */
