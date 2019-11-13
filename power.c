#include <stdio.h>
#include "myMath.h"
#define EXP 2.71828182846

double Exp(int x){
	int i = 0;
	if (x == 0){
		return 1;
	}
	double sum = EXP;
	if (x>0){
		for(i=1; i<x ; i++){
			sum = EXP*sum;
		}
	}
	else{
		sum = 1/sum;
		x=x*-1;
		for(i=1; i<x ; i++){
			sum = sum/EXP;
		}
	}
	return sum;
}

double Pow(double x, int y){
	int i = 0;
	double sum =x;
	if (y==0){
		return 1;
	}
	if (y>0){
		for(i=1; i<y ; i++){
			sum = sum*x;
		}
	}
	else{
		sum = 1/sum;
		y=y*-1;
		for(i=1; i<y ; i++){
			sum = sum/x;
		}
	}
	return sum;
}
