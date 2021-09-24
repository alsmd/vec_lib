/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:02:52 by user42            #+#    #+#             */
/*   Updated: 2021/09/24 09:34:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec	*new_vec(float x, float y)
{
	t_vec *vec;

	vec = (t_vec *) malloc(sizeof(t_vec));
	vec->x = x;
	vec->y = y;
	return (vec);
}

t_vec	*vec_init(t_vec *vec, float x, float y)
{
	vec->x = x;
	vec->y = y;
	return (vec);
}

void	vec_scale(t_vec *v1, float scale)
{
	v1->x *= scale;
	v1->y *= scale;
}

void	vec_sum(t_vec *v1, t_vec *v2)
{
	v1->x += v2->x;
	v1->y += v2->y;
}

void	vec_sub(t_vec *v1, t_vec *v2)
{
	v1->x -= v2->x;
	v1->y -= v2->y;
}

void	vec_mult(t_vec *v1, t_vec *v2)
{
	v1->x *= v2->x;
	v1->y *= v2->y;
}

void	vec_div(t_vec *v1, t_vec *v2)
{
	v1->x /=  v2->x;
	v1->y /=  v2->y;
}

void	vec_magnitude(t_vec *v)
{
	v->magnitude = sqrt((v->x * v->x) + (v->y * v->y));
}

void	vec_normalize(t_vec *v)
{
	if (v->magnitude > 0)
	{
		v->x /= v->magnitude;
		v->y /= v->magnitude;
	}
}

void	vec_rotate(t_vec *vec, float	angle)
{
	float	rad;
	float	x;
	float	y;

	x = vec->x;
	y = vec->y;
	rad = angle * M_PI / 100;
	
	vec->x = x * cos(rad) - y * sin(rad);
	vec->y = y * cos(rad) + x * sin(rad);
}

float	vec_dot_product(t_vec *vec1, t_vec *vec2)
{
	return  (vec1->x * vec2->x + vec1->y * vec2->y);
}
