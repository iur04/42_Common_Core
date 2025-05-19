/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:48:07 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/07 21:40:00 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Compara duas strings até n caracteres
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (s1[i] != '\0' && s1[i] == s2[i])
		{
			while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
				i++;
		}
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

// int	main()
// {
// 	printf("%d\n", ft_strncmp("chimichurri", "churrix", 5));
// 	printf("%d\n", strncmp("chimichurri", "churrix", 5));
// }
