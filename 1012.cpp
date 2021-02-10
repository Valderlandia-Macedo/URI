#include <stdio.h>
#include <math.h>
int main ()
{
	float A,B,C;
	float TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
	scanf("%f%f%f",&A,&B,&C);
	TRIANGULO = A*C/2;
	CIRCULO = C*C*3.14159;
	TRAPEZIO = ((A+B)*C)/2;
	QUADRADO = B*B;
	RETANGULO = A*B;
	printf("TRIANGULO: %.3f\n",TRIANGULO);
	printf("CIRCULO: %.3f\n",CIRCULO);
	printf("TRAPEZIO: %.3f\n",TRAPEZIO);
	printf("QUADRADO: %.3f\n",QUADRADO);
	printf("RETANGULO: %.3f\n",RETANGULO);
}
