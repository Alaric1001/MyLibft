/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:23:34 by asenat            #+#    #+#             */
/*   Updated: 2016/11/11 13:25:07 by asenat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string/string.h"

int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
