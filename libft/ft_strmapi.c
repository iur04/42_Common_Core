/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:27:19 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/09 14:42:13 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Aplica uma função a cada caractere da string para criar uma nova. (com malloc)
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	res = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!s || !f || !res)
		return (NULL);
	i = 0;
	while (i < (ft_strlen((char *)s)))
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/* char	ft_ctoupper(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	index *= 1;
	return (c);
}

int	main(void)
{
	char str[] = "abcdefg";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strmapi(str, ft_ctoupper));
	return (0);
} */
