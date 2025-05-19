/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:50:18 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/08 16:11:25 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Busca uma substring dentro de outra, até n caracteres
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		leng_to_find;

	if (*little == '\0')
		return ((char *)big);
	leng_to_find = ft_strlen((char *)little);
	while (*big != '\0' && len-- >= leng_to_find)
	{
		if (*big == *little && ft_memcmp(big, little, leng_to_find) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}

/* int main(void)
{
	const char *big = "O projeto da 42 Lisboa é desafiador!";
	const char *little1 = "42";
	const char *little2 = "Lisboa";
	const char *little3 = "desafio";
	const char *little4 = "";
	const char *little5 = "não existe";
	// Caso normal
	printf("1. Resultado: %s\n", ft_strnstr(big, little1, 30));
	// little no meio da string
	printf("2. Resultado: %s\n", ft_strnstr(big, little2, 35));
	// little cortado pelo len
	printf("3. Resultado: %s\n", ft_strnstr(big, little3, 25));
// deve dar NULL
	// little vazia
	printf("4. Resultado: %s\n", ft_strnstr(big, little4, 10));
// deve retornar big
	// little inexistente
	printf("5. Resultado: %s\n", ft_strnstr(big, little5, 50));
// deve dar NULL
	// len menor que posição de little
	printf("6. Resultado: %s\n", ft_strnstr(big, little2, 10));
// deve dar NULL
	return (0);
} */
