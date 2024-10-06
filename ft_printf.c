/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:14:54 by marrey            #+#    #+#             */
/*   Updated: 2024/10/05 18:30:03 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_args(va_list ap, char specifier)
{
	int	count_char;

	count_char = 0;
	if (specifier == 'c')
		count_char += handling_char(ap);
	else if (specifier == 's')
		count_char += handling_string(ap);
	else if (specifier == 'd' || specifier == 'i')
		count_char += handling_int(ap);
	else if (specifier == 'p')
		count_char += handling_pointer(ap);
	else if (specifier == 'x')
		count_char += handling_hex_lower(ap);
	else if (specifier == 'X')
		count_char += handling_hex_upper(ap);
	else if (specifier == '%')
		count_char += write(1, "%", 1);
	else
		count_char += ft_putchar(specifier);
	return (count_char);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count_char;

	count_char = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			count_char += print_args(ap, *(++format));
		else
			count_char += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (count_char);
}
