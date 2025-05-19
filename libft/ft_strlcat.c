/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:46:39 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/08 17:54:37 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Concatena apenas o tamanho de size
//Retorna o espaço total que era necessario para concatenar
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		src_i;
	size_t		value;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dst))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(src) + ft_strlen(dst);
	i = 0;
	while (dst[i] != '\0')
		i++;
	src_i = 0;
	while (src[src_i] != '\0' && i < size - 1)
	{
		dst[i] = src[src_i];
		src_i++;
		i++;
	}
	dst[i] = '\0';
	return (value);
}

/* #include <bsd/string.h>
int	main()
{
	char *str1 = NULL;
	char str2[] = "World.";

	printf("Resultado: '%s'\n", str1);
	printf("O tamaho de tudo junto é '%ld'.", ft_strlcat(str1, str2, 0));
} */
