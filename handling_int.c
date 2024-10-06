/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:15:15 by marrey            #+#    #+#             */
/*   Updated: 2024/10/05 17:48:12 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handling_int(va_list args)
{
	int	num;

	num = va_arg(args, int);
	return (ft_putnbr(num));
}
