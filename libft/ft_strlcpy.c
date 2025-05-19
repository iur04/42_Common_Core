/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:46:57 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/08 17:44:53 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copia string com limite e retorna o comprimento da original (evita overflow)
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	leng;

	leng = ft_strlen(src);
	if (size == 0)
		return (leng);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (leng);
}

/* #include <bsd/string.h>
int	main(void)
{
	size_t	i = 3;
	char	dest[12] = "CHIMICHURRI";
	printf("Esperado: 5 (tamanho de \"SAUCE\")\n");
	printf("obtido: %zu\n", ft_strlcpy(dest, "SAUCE", i));
	printf("dest depois da cópia: \"%s\"\n", dest);
} */
