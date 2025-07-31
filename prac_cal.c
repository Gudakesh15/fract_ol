#include <stdio.h>
#include <stdlib.h>

typedef	struct s_complex
{
	//x
	double real;
	//imaginary
	double	i;
}	t_complex;

int main(int ac, char **av)
{
	t_complex z;
	t_complex c;
	double tmp_real;

	z.real = 0;
	z.i = 0;

	c.real = atof(av[1]);
	c.i = atof(av[2]);

	int i = 0;

	while(i < atof(av[3]))
	{
		tmp_real = (z.real * z.real) - (z.i * z.i);
		z.i = 2 * z.real * z.i;
		z.real = tmp_real;

		z.real += c.real;
		z.i += c.i;

		i++;

		printf("internation -> %d real %f imaginary %f\n", i, z.real, z.i);
	}
}
