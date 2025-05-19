/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:10:47 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/08 17:57:16 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Transforma minúscula em maiúscula
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/* int	main()
{
	int	islower = 'a';
	int	isupper = 'B';
	int	isspecial = '.';

	printf("%c -> %c\n", islower, ft_toupper(islower));
	printf("%c -> %c\n", islower, toupper(islower));
	printf("%c -> %c\n", isupper, ft_toupper(isupper));
	printf("%c -> %c\n", isupper, toupper(isupper));
	printf("%c -> %c\n", isspecial, ft_toupper(isspecial));
	printf("%c -> %c\n", isspecial, toupper(isspecial));
} */
