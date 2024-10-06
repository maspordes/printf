/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:15:33 by marrey            #+#    #+#             */
/*   Updated: 2024/10/05 17:49:53 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handling_string(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	return (ft_putstr(str));
}
