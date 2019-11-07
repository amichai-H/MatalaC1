#include <stdio.h>
#include "myMath.h"

int main{
	double x_d = 0;
	float f1_b = 0;
	printf("Pls enter a real number: ");
	scanf("%lf\n",&x_d);
	f1_b = sub(add((float)exp((int)x_d) ,(float)pow(x_d,3)),2);
	printf("%.4f\n");
}

