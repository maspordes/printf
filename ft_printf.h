/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:15:58 by marrey            #+#    #+#             */
/*   Updated: 2024/10/07 20:45:44 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_args(va_list ap, char specifier);
int	handling_char(va_list args);
int	handling_hex_lower(va_list args);
int	handling_hex_upper(va_list args);
int	handling_int(va_list args);
int	handling_pointer(va_list args);
int	handling_string(va_list args);
int handling_unsigned(va_list args);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putnbr_base(unsigned long nbr, char *base);
int	ft_putstr(char *str);
int ft_putnbr_unsigned(unsigned int nb);

#endif
