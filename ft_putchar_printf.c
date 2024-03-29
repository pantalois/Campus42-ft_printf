/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loigonza <loigonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:22:48 by loigonza          #+#    #+#             */
/*   Updated: 2024/02/15 12:20:21 by loigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putchar_printf(int c)
{
	if (write (1, &c, 1) == -1)
		return (-1);
	else
		return (1);
}
