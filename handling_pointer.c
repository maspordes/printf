/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:15:26 by marrey            #+#    #+#             */
/*   Updated: 2024/10/05 18:00:09 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handling_pointer(va_list args)
{
	void			*ptr;
	unsigned long	adress;

	ptr = va_arg(args, void *);
	adress = (unsigned long)ptr;
	return (ft_putnbr_base(adress, "0123456789abcdef"));
}
