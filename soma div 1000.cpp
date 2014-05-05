#include<stdio.h>
#include<conio.h>
	int main(){
		int i, j, soma1=0, soma2=0, s=0;
			for(i=1; i<=1000; i++)
				if(i%3==0)
				{
					soma1 = soma1+ i;
				}
			for(j=1; j<=1000; j++)
				if(j%5==0)
				{
					soma2 = soma2+ j;
				}
		printf("%d\n", soma1);
		printf("%d\n", soma2);
		printf("A soma dos numeros abaixo de 1000 que são divisores de 5 e 3 é %d:\n", (s=soma1+soma2));
	}
	
