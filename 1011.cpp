#include <stdio.h>
#include <math.h>
int main ()
{
	float R;
	double VOLUME;
	const double pi = 3.14159;
	scanf("%f",&R);
	VOLUME=((4.0/3)*pi)*(R*R*R);
	printf("VOLUME = %.3lf\n",VOLUME);
}
