/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswspace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmulamba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:35:36 by bmulamba          #+#    #+#             */
/*   Updated: 2018/05/31 07:43:02 by bmulamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\n')
		return (1);
	else
		return (0);
}
