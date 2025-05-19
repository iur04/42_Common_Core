/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:33:15 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/07 21:50:48 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Procura nos primeiros 'n' bytes de 's' a primeira ocorrencia de 'c'
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	x[115] = "Chimi, churri!";

	printf("resultado eperado: %s\n", (char *)memchr(x, 'h', 9));
	printf("resultado obtido: %s\n", (char *)ft_memchr(x, 'h', 9));
} */
