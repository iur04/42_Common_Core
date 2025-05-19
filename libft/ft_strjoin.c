/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:44:19 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/09 19:10:42 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Junta duas strings e cria uma nova string (s1 + s2).
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		i2;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	join = malloc(sizeof(char) * (ft_strlen((char *)s1)
				+ ft_strlen((char *)s2) + 1));
	if (!join)
		return (NULL);
	i = 0;
	i2 = 0;
	while (s1[i])
	{
		join[i2++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		join[i2++] = s2[i++];
	}
	join[i2] = '\0';
	return (join);
}

/* int	main(void)
{
	char *a;

	a = ft_strjoin("We Are", "The Champions");
	printf("ft_strjoin: %s\n", a);
	free (a);
	a = ft_strjoin("We Are", "");
	printf("ft_strjoin: %s\n", a);
	free (a);
	a = ft_strjoin("", "The Champions");
	printf("ft_strjoin: %s\n", a);
	free (a);
	a = ft_strjoin("", "");
	printf("ft_strjoin: %s\n", a);
	free (a);
	a = ft_strjoin("We Are", NULL);
	printf("ft_strjoin: %s\n", a);
	free (a);
	a = ft_strjoin(NULL, "The Champions");
	printf("ft_strjoin: %s\n", a);
	free (a);

	return (0);
} */
