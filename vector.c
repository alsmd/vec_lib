/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:02:52 by user42            #+#    #+#             */
/*   Updated: 2021/09/22 18:02:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"
static void	magnitude(t_vec *v);

t_vec	*new_vec(float x, float y)
{
	t_vec *vec;

	vec = (t_vec *) malloc(sizeof(t_vec));
	vec->x = x;
	vec->y = y;
	vec->sum = sum;
	vec->sub = sub;
	vec->mult = mult;
	vec->div = _div;
	vec->scale = scale;
	vec->normalize = normalize;
	vec->mag = magnitude;
	return (vec);
}

t_vec	*vec_init(t_vec *vec, float x, float y)
{
	vec->x = x;
	vec->y = y;
	vec->sum = sum;
	vec->sub = sub;
	vec->mult = mult;
	vec->div = _div;
	vec->scale = scale;
	vec->normalize = normalize;
	vec->mag = magnitude;
	return (vec);
}

void	scale(t_vec *v1, float scale)
{
	v1->x *= scale;
	v1->y *= scale;
}

void	sum(t_vec *v1, t_vec *v2)
{
	v1->x += v2->x;
	v1->y += v2->y;
}

void	sub(t_vec *v1, t_vec *v2)
{
	v1->x -= v2->x;
	v1->y -= v2->y;
}

void	mult(t_vec *v1, t_vec *v2)
{
	v1->x *= v2->x;
	v1->y *= v2->y;
}

void	_div(t_vec *v1, t_vec *v2)
{
	v1->x /=  v2->x;
	v1->y /=  v2->y;
}

static void	magnitude(t_vec *v)
{
	v->magnitude = sqrt((v->x * v->x) + (v->y * v->y));
}

void	normalize(t_vec *v)
{
	if (v->magnitude > 0)
	{
		v->x /= v->magnitude;
		v->y /= v->magnitude;
	}
}