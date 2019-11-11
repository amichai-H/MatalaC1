#include <stdio.h>
#include "myMath.h"
#define EXP 2.71828182846

double Exp(int x){
	int i = 0;
	if (x == 0){
		return 1;
	}
	double sum = EXP;
	for(i=1; i<x ; i++){
		sum = mul(EXP,x);
	}
	return sum;
}

double Pow(double x, int y){
	int i = 0;
	int sum =x;
	if (y==0){
		return 1;
	}
	else{
		for(i=1; i<y ; i++){
			sum = mul(sum,x);
		}
	}
	return sum;
}
