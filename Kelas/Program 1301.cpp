//float harus ada return
#include <stdio.h>
//SALAH
float sum(float x,float y)
{
	float result;
	result=x+y;
}

//BENAR
float sum(float x,float y)
{
	float result;
	result=x+y;
	return result;
}

