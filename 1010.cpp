#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i;
	int cp[2],np[2];
	float vp[2],t[2],soma=0;
	for(i=0;i<2;i++)
	{
		scanf("%d%d%f",&cp[i],&np[i],&vp[i]);
	}
	for(i=0;i<2;i++)
	{
		t[i]=np[i]*vp[i];
		soma+=t[i];
	}
	printf("VALOR A PAGAR: R$ %.2f\n",soma);
}
