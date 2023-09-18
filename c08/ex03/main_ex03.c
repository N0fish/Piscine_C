#include "ft_point.h"
#include <string.h>
#include <stdio.h>

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
	// strcpy(point->str, "salut");
}

int main(void)
{
	t_point point;
	set_point(&point);
	// printf("%s\n", point.str);
	return (0);
}


// #ifndef FT_POINT_H
// # define FT_POINT_H

// typedef struct point
// {
// 	int	x;
// 	int	y;
// 	char str[6];
// } t_point;

// #endif