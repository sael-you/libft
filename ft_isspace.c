/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 16:03:34 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/22 16:08:36 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char chr)
{
	if (chr <= ' ')
		return (1);
	return (0);
}
