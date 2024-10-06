/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:16:10 by marrey            #+#    #+#             */
/*   Updated: 2024/10/05 18:42:24 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	result;

	result = write(1, &c, 1);
	if (result == -1)
		return (0);
	else
		return (1);
}

int	ft_putnbr(int nb)
{
	int	count_char;

	count_char = 0;
	if (nb == -2147483647)
		count_char += write(1, "-2147483647", 11);
	if (nb < 0)
	{
		count_char += write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		count_char += ft_putnbr(nb / 10);
	count_char += ft_putchar((nb % 10) + '0');
	return (count_char);
}

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int	count_char;

	count_char = 0;
	if (nbr > 16)
		count_char += ft_putnbr_base(nbr / 16, base);
	count_char += write(1, &base[nbr % 16], 1);
	return (count_char);
}

int	ft_putstr(char *str)
{
	int	count_char;

	count_char = 0;
	while (*str)
	{
		count_char += ft_putchar(*str);
		str++;
	}
	return (count_char);
}
