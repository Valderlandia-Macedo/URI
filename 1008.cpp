#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int numf, numh;
	float valh, sal=0;
	scanf("%d%d%f",&numf,&numh,&valh);
	sal=valh*numh;
	printf("NUMBER = %d\n",numf);
	printf("SALARY = U$ %.2f\n",sal);
}
