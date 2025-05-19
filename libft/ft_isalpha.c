/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:07:40 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/08 16:15:03 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Verifica se é uma letra (A-Z, a-z)
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* int	main()
{
	int c = 18;
	int g = 'B';

	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	printf("%d\n", ft_isalpha(g));
	printf("%d\n", isalpha(g));
} */
