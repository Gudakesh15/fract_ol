/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaviral <aaviral@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:21:41 by aaviral           #+#    #+#             */
/*   Updated: 2025/08/01 17:45:42 by aaviral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractal.h"

double map(double unscaled_num, double new_min, double new_max, double old_min, double old_max)
{
	return (new_max - new_min) * (unscaled_num - old_min) / (old_max - old_min) + new_min;
}

t_complex	sum_complex(t_complex z1, t_complex z2)
{
	t_complex	result;

	result.x = z1.x + z2.x;
	result.y = z1.y + z2.y;
	return(result);
}

t_complex	square_complex(t_complex z)
{
	t_complex result;

	result.x = (z.x * z.x) + (z.y * z.y);
	result.y = 2 * z.x * z.y;
	return result;
}
