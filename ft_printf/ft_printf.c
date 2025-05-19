/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:24:23 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/13 16:09:15 by rupinto-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

va_list - // É uma structure que é usada pelas funções: va_start(), va_arg(), and va_end(). 
//Esta structure vai guardar os argumentos extra,
//mas não precisamos de inicializa-la ou dar free porque isso é o que as macros da va_start() e va_end() fazem.

void	va_start(va_list argument_list, last_known_parameter);

argument_type	va_arg(va_list argument_list, argument_type);

void	va_end(va_list argument_list);

int	ft_printf(const char *format, ...)
{
	
}