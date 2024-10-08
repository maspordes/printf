/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:15:26 by marrey            #+#    #+#             */
/*   Updated: 2024/10/07 20:16:29 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handling_pointer(va_list args)
{
	void			*ptr;
	unsigned long	address;
	int				count_char;

	count_char = 0;
	ptr = va_arg(args, void *);
	if(!ptr)
		return(ft_putstr("(nil)"));
	count_char += ft_putstr("0x");
	address = (unsigned long)ptr;
	count_char += ft_putnbr_base(address, "0123456789abcdef");
	return (count_char);
}
