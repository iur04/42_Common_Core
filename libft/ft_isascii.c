/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:54:35 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/08 16:17:56 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Verifica se está entre 0 e 127
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int	main()
{
	int	isascii = 'T';
	int	notascii = 128;

	printf ("%d\n", ft_isascii(isascii));
	printf ("%d\n", isascii(isascii));
	printf ("%d\n", ft_isascii(notascii));
	printf ("%d\n", isascii(notascii));
} */
