/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:50:43 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/08 13:23:47 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Remove caracteres de uma string do início e do fim.
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size1;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	size1 = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[size1]) && size1 != '\0')
		size1--;
	return (ft_substr((char *)s1, 0, size1 + 1));
}

/* int	main(void)
{
	char *a;

	a = ft_strtrim("Chimi Churri!", "Ch");
	printf("ft_strtrim: %s\n", a);
	free (a);
	a = ft_strtrim("\\nChimi Churri\\n", "\\n");
	printf("ft_strtrim: %s\n", a);
	free (a);
	a = ft_strtrim("xxChimixxChurrixx", "xx");
	printf("ft_strtrim: %s\n", a);
	free (a);
	a = ft_strtrim("Chimi", NULL);
	printf("ft_strtrim: %s\n", a);
	free (a);
	a = ft_strtrim(NULL, "Churri");
	printf("ft_strtrim: %s\n", a);
	free (a);

	return (0);
} */
