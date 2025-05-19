/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:27:44 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/08 16:16:47 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Verifica se é alfanumérico (letra ou número)
int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* int	main()
{
	int	ifnumb = '0';
	int	ifletter = 'a';
	int	ifsymb = '+';

	printf ("%d\n", ft_isalnum(ifnumb));
	printf ("%d\n", isalnum(ifnumb));
	printf ("%d\n", ft_isalnum(ifletter));
	printf ("%d\n", isalnum(ifletter));
	printf ("%d\n", ft_isalnum(ifsymb));
	printf ("%d\n", isalnum(ifsymb));

} */
