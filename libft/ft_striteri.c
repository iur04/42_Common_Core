/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:24:37 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/09 14:19:17 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Aplica uma função in-place a cada caractere da string (sem malloc).
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, (s + i));
			i++;
		}
	}
}

// // Função de exemplo: coloca tudo em maiúsculo
// void	to_upper(unsigned int i, char *c)
// {
// 	(void)i; // Não vamos usar o índice aqui
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

// int	main(void)
// {
// 	char str[] = "hello world!";

// 	printf("Antes : %s\n", str);
// 	ft_striteri(str, to_upper);
// 	printf("Depois: %s\n", str);

// 	return 0;
// }
