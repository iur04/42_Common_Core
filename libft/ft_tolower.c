/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:35:40 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/08 17:58:14 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Transforma maiúscula em minúscula
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/* int	main()
{
	int	islower = 'a';
	int	isupper = 'B';
	int	isspecial = '.';

	printf("%c -> %c\n", islower, ft_tolower(islower));
	printf("%c -> %c\n", islower, tolower(islower));
	printf("%c -> %c\n", isupper, ft_tolower(isupper));
	printf("%c -> %c\n", isupper, tolower(isupper));
	printf("%c -> %c\n", isspecial, ft_tolower(isspecial));
	printf("%c -> %c\n", isspecial, tolower(isspecial));
} */
