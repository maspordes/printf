/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:30:35 by marrey            #+#    #+#             */
/*   Updated: 2024/10/07 20:55:56 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int handling_unsigned(va_list args)
{
    unsigned int    nb;
    
    nb = va_arg(args, unsigned int);
    return(ft_putnbr_unsigned(nb));
}