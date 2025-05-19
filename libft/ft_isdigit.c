/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:59:42 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/08 16:15:55 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Verifica se é um dígito (0-9)
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* int	main()
{
	int	ifletter = 'a';
	int	ifnumb = '0';

	printf ("%d\n", ft_isdigit(ifletter));
	printf ("%d\n", isdigit(ifletter));
	printf ("%d\n", ft_isdigit(ifnumb));
	printf ("%d\n", isdigit(ifnumb));
} */
