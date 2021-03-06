/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lo_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 13:26:25 by lmeyre            #+#    #+#             */
/*   Updated: 2018/06/22 18:12:00 by clrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		lo_strlen(const char *s)
{
	int i;

	if (!s)
		return (-1);
	i = 0;
	while (*s++)
		i++;
	return (i);
}
