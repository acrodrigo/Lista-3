#include <stdio.h>
#include <conio.h>
#define tam 10	
	int main(){
		int lis[tam];
		int i;
		int maior=0;
			
			for(i=0;i<tam;i++)
			{
			printf("Insira um elemento %d: ", i);
			scanf("%d", &lis[i] );
			}
			
				for(i=0;i<tam;i++)
				{
					if(lis[i]>maior)
					{
						maior=lis[i];
					}
				} 	
			
			printf("O maior valor inserido é %d\n\n", maior);
			printf("Os valores do vetor são %d\n", lis[i]);
			
			
		getch();

	}
	
