#include<stdio.h>
#include<conio.h>
	int main(){
		int i, a, res, c;
		i=a=res=0;
		
			while(i<50)
				{
				a = a +2;
				res += a;
				printf("Esses s�o os ciquenta primeiros pares %d\n", a);
			/*	printf("%d\n", res);*/                                                 
				i++;
				}
				
				c = res;
				printf ("A soma dos 50 primeiros pares � %d\n", c);
	}
	
