#include "err.h"
#include <stdio.h>
#include <stdlib.h>


float error(float x,float y,float r)
{
	if(x>=0 && y>=0 && r>=0)
	{
		return 0;
	}
	else if(x<=0 && y<=0 && r<=0)
	{
		return 0;	
	}	
	else{
		printf("Введены неверные данные\n");
		exit(0);
	}
}
