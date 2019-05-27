#include <stdio.h>
#include <stdlib.h>
#include "err.h"

int main()
{
	float x,y;
	float r;
	printf("Напишите координаты для окружности x and y, r :\n");
	scanf("%f%f%f", &x, &y, &r);
	error(x,y,r);	
	printf("Координаты вашей окружности: (%.4f %.4f, %.4f)\n", x, y, r);	
	float pi, P, S;
	pi = 3.1415;
	P = 2*pi*r;
	S = pi* r*r;
	printf("Площадь = %.4f\n", S);
	printf("Периметр = %.4f\n", P);
	return 0;
}

