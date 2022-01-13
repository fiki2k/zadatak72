// Program ce izracunat povrsinu baze prizme.

#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

//Funkcija za povrsine baze prizme.
float povrsina(int a,int n){
	
	double B= (1.0/4.0) *n* (a*a) * 1.0/tan(PI /n);
	return B;
}

int main(){
   int a,n;
   printf("Unesi duljinu strane prizme:\n");
   scanf("%d",&a);
   printf("Unesi broj strana prizme:\n");
   scanf("%d",&n);
   float B=povrsina(a,n);
   printf("Povrsina baze prizme je %f\n",B);
   return 0;
}
