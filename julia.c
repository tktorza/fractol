#include "Includes/fractol.h"

void	julia(t_env *e)
{
	double	c_re;
	double	c_ima;
	double	new_re, old_re, new_ima, old_ima;
	c_re = e->c1;
	c_ima = e->c2;

	int y = 0;
	while (y < e->longer)
	{
		int x = 0;
		while ( x < e->large)
		{
		new_re = 1.5 * (x - e->large / 2) / (0.5 * e->zoom * e->large) + e->esc_right;
		    new_ima = (y - e->longer / 2) / (0.5 * e->zoom * e->longer) + e->esc_up;
			int i = 0;
			while (i < e->it_max)
			{
				old_re = new_re;
				old_ima = new_ima;
				new_re = old_re * old_re - old_ima * old_ima + c_re;
				new_ima = 2 * old_re * old_ima + c_ima;
				if (new_re * new_re + new_ima * new_ima > 4)
				{
				if (i > 20)
					draw_pixel(e, x + e->esc_right, y + e->esc_up, (t_color) {30 * i, 25 * i, 255 * i});
				else
					draw_pixel(e, x + e->esc_right, y + e->esc_up, (t_color) {355 * i, 0, 25 * i});

				}
i++;
			}
		x++;
		}
	
		y++;
	}
}
