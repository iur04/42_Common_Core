/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:02:14 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/08 16:18:19 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Verifica se é um caractere imprimível
int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

/* int	main()
{
	int	isprint = 'R';
	int	notprint = 127;

	printf ("%d\n", ft_isprint(isprint));
	printf ("%d\n", isprint(isprint));
	printf ("%d\n", ft_isprint(notprint));
	printf ("%d\n", isprint(notprint));
}
 */
