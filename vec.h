/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:25:49 by user42            #+#    #+#             */
/*   Updated: 2021/09/25 14:09:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_H
#define VEC_H
#include <stdlib.h>
#include <math.h>

typedef struct s_vec
{
	float	x;
	float	y;
	float	z;
	float	magnitude;
} t_vec;


void	vec_sum(t_vec *v1, t_vec *v2);
void	vec_sub(t_vec *v1, t_vec *v2);
void	vec_mult(t_vec *v1, t_vec *v2);
void	vec_div(t_vec *v1, t_vec *v2);
void	vec_scale(t_vec *v1, float scale);
void	vec_normalize(t_vec *v);
t_vec	*vec_init(t_vec *vec, float x, float y, float z);
t_vec	*new_vec(float x, float y, float z);
void	vec_magnitude(t_vec *v);
void	vec_rotate(t_vec *vec, float	angle);
void	vec_rotatex(t_vec *vec, float	angle);
void	vec_rotatey(t_vec *vec, float	angle);
void	vec_rotatez(t_vec *vec, float	angle);
float	vec_dot_product(t_vec *vec1, t_vec *vec2);

#endif