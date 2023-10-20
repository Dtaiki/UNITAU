#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float m=0.5, k=2, xb, xs, yb, ys, xr, yr;							// adicao das variaveis
	
	ys= k-m;							// calcula o menor valor de y
	yb= k+m;							// calcula o maior valor de y
	xs= ys;							// calcula o menor valor de x
	xb= yb;							// calcula o maior valor de x
	while(yr!=0 && xb-xs>0.00000001)							// loop para achar a raiz
	{
		xr= m*(xs+xb);							// calcula a media de x
		yr= xr- m*sin(xr)-k;							// calcula a media de y
		if(ys*yb<0)							// verifica se o valor desejado esta abaixo ou acima da media de y
			xb=xr;
		else
			xs=xr;
	}
	printf("resultado= %lf", xr);							// imprime o resultado da equacao

return 0;
}
