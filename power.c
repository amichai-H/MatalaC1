#include <stdio.h>
#include "myMath.h"
#define EXP 2.71828182846

double exp(int x){
	int i = 0;
	double sum = 0;
	for(i=0; i<x ; i++){
		sum = sum + EXP;
	}
	return sum;
}

double pow(double x, int y){
	int i = 0;
	int sum =0;
	if (y==0){
		sum = 1;
	}
	else{
		for(i=0; i<y ; i++){
			sum = sum + x;
		}
	}
	return sum;
}
