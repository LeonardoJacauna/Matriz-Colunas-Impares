//leia uma matriz 4x4 e mostre somente as colunas impares. Mostre no final a matriz obtida.
//Leonardo Jacauna - 2017
//Todos os direitos reservados.

#include <stdio.h>

int main (void){
	int i,j,l=4,c=4,matriz[l][c];
	
	for (i=0;i<l;i++){//linha
		for(j=0;j<c;j++){//coluna
			printf ("Matriz [%d][%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	//system("cls");
	printf("_____________________Matriz__________________________\n\n");//imprimir a matriz
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf ("\t%d",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("________________Matriz Colunas Impares___________________\n\n");
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			
			if(j%2==0){ //condição para verificar se j é par, se for par cai na codição de falso entao imprime as colunas impares.
			}
			
			else{
			printf ("\t%d",matriz[i][j]);
			printf("\t");
		
			}
		}
		printf("\n");
	}

	return 0;
}
