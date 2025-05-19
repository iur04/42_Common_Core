/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:05:46 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/08 15:54:36 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Aloca espaco subs 0
void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > ((size_t) - 1) / size)
		return (NULL);
	str = (void *)malloc(nmemb * size);
	if (!str)
	{
		return (NULL);
	}
	ft_bzero(str, nmemb * size);
	return (str);
}

/* int	main()
{
	size_t n = 5;
	int	*real = calloc(n, sizeof(int));
	int	*fake = ft_calloc(n, sizeof(int));
	size_t	i = 0;

	if (!real || !fake)
	{
		printf("Allocation falied \n");
		return (1);
	}
	while (i < n)
	{
		if (real[i] != fake[i])
		{
			printf("Mismatch at index %zu: real[%zu] = %d, fake[%zu] = %d\n",
					i, i, real[i], i, fake[i]);

		}
		i++;
	}
	free(real);
	free(fake);
	return (0);
} */
