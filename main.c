#include <stdio.h>
#include "myMath.h"

int main(){
	double x_d = 0;
	float f1_d = 0;

	printf("Pls enter a real number : ");
	scanf("%lf", &x_d);

	f1_d = sub(add((float)Exp((int)x_d) ,(float)Pow(x_d,3)),2);

	printf("The value of f(%lf) = e^x + x^3 - 2  =  %.4f\n", x_d, f1_d);
	
	f1_d = add((float)mul(3,x_d),(float)mul(2,Pow(x_d,2)));

	printf("The value of f(%lf) = 3x + 2x^2  =  %.4f\n", x_d, f1_d);
	
	f1_d = sub((float)div(mul(Pow(x_d,3),4),5),(float)mul(x_d,2));

	printf("The value of f(%lf) = (4x^3)/5 - 2x  =  %.4f\n", x_d, f1_d);
	
	return 0;
}

