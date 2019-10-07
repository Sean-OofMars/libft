/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:17:46 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/03 11:05:00 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int src)
{
	if ((src >= 'A' && src <= 'Z') || (src >= 'a' && src <= 'z'))
		return (1);
	else if (src >= 060 && src <= 071)
		return (1);
	else
		return (0);
}
