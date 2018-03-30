/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tktorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 18:04:39 by tktorza           #+#    #+#             */
/*   Updated: 2016/03/23 18:09:12 by tktorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/fractol.h"

void	e_initialize(t_env *e)
{
	if (e->frac == 'J')
	{
		e->zoom = 1;
		e->esc_right = 0;
		e->esc_up = 0;
	e->it_max = 200;
	e->c1 = -1.25;
	e->c2 = 0.25;
	}
	else if (e->frac == 'M')
	{

	e->zoom = 100;
	e->esc_right = 50;
	e->esc_up = 50;
	e->it_max = 150;
}
	e->longer = 400;
	e->large = 400;
}
