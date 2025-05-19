/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:55:04 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/07 21:35:49 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Zera um bloco de memória (memset com 0)
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/* int	main()
{
	char	tester[15] = "Chimichurri";

	ft_bzero(tester, 3);

	int	i = 0;
	while (i < 15)
	{
	if (tester[i] == '\0')
		printf("0 ");
	else
		printf("%c", tester[i]);
	i++;
	}
	printf("\n");
} */
