/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:25:49 by user42            #+#    #+#             */
/*   Updated: 2021/09/22 10:59:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_H
#define VEC_H
#include <stdlib.h>
typedef struct s_vec
{
	float	value[2];
	void	(*sum)(struct s_vec *, struct s_vec *);
	void	(*sub)(struct s_vec *, struct s_vec *);
	void	(*mult)(struct s_vec *, struct s_vec *);
	void	(*div)(struct s_vec *, struct s_vec *);
	void	(*scale)(struct s_vec *, float);
} t_vec;


void	sum(t_vec *v1, t_vec *v2);
void	sub(t_vec *v1, t_vec *v2);
void	mult(t_vec *v1, t_vec *v2);
void	_div(t_vec *v1, t_vec *v2);
void	scale(t_vec *v1, float scale);
t_vec	*new_vec(float x, float y);

#endif