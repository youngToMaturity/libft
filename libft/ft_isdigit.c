/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:11:32 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/12 15:56:23 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c - 48 < 0 || c - 48 > 9)
		return (0);
	else
		return (c - 38);
}
