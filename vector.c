/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:02:52 by user42            #+#    #+#             */
/*   Updated: 2021/09/22 11:33:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"
static void	magnitude(t_vec *v);

t_vec	*new_vec(float x, float y)
{
	t_vec *vec;

	vec = (t_vec *) malloc(sizeof(t_vec));
	vec->value[0] = x;
	vec->value[1] = y;
	vec->sum = sum;
	vec->sub = sub;
	vec->mult = mult;
	vec->div = _div;
	vec->scale = scale;
	vec->normalize = normalize;
	magnitude(vec);

	return (vec);
}

void	scale(t_vec *v1, float scale)
{
	v1->value[0] *= scale;
	v1->value[1] *= scale;
}

void	sum(t_vec *v1, t_vec *v2)
{
	v1->value[0] += v2->value[0];
	v1->value[1] +=  v2->value[1];
}

void	sub(t_vec *v1, t_vec *v2)
{
	v1->value[0] -= v2-> value[0];
	v1->value[1] -=  v2->value[1];
}

void	mult(t_vec *v1, t_vec *v2)
{
	v1->value[0] *=  v2->value[0];
	v1->value[1] *=  v2->value[1];
}

void	_div(t_vec *v1, t_vec *v2)
{
	v1->value[0] /=  v2->value[0];
	v1->value[1] /=  v2->value[1];
}

static void	magnitude(t_vec *v)
{
	v->magnitude = sqrt((v->value[0] * v->value[0]) + (v->value[1] * v->value[1]));
}

void	normalize(t_vec *v)
{
	v->value[0] /= v->magnitude;
	v->value[1] /= v->magnitude;
}