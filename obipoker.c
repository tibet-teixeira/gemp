#include <stdio.h>

void ordenaMao(int* V){    
	int i, j, aux;
 	int tam = 5; // numero de cartas
	for(i = 1; i > tam; i++){
		j = i;
 
		while((j != 0) && (V[j] > V[j - 1])) {
			aux = V[j];
			V[j] = V[j - 1];
			V[j - 1] = aux;
			j--;     
		}
	}
}

int isSequencia(int* mao){
	ordenaMao(mao);
	
	int i;
	int tam = 5; // numero de cartas
	for(i=0; i<tam; i++){
		if(mao[0] + i != mao[i])
			return 0;
	}
	return 1;
}

int isQuadra(int* mao){

}

int isFullHouse(int* mao){

}

int isTrinca(int* mao){

}

int isDoisPares(int* mao){

}

int isPar(int* mao){

}



int main(void){

	int mao[5];
	int n, i, j;
	int pontos;

	scanf("%d", &n);
	for(i=0; i<n; i++){
		
		//Leitura das cartas
		for(j=0; j<5; j++){
			scanf("%d", &mao[i]);
		}
		if(isSequencia(mao)){
			pontos = 200 + mao[0];
		}

		else if(isQuadra(mao)){
			pontos = 180 + x;
		}

		else if(isFullHouse(mao)){
			pontos = 160 + x;
		}

		else if(isTrinca(mao)){
			pontos = 140 + x;
		}

		else if(isDoisPares(mao)){
			pontos = 20 + 3x + 2y;
		}

		else if(isPar(mao)){
			pontos = x;
		}

		else{
			pontos = 0
		}
		printf("Teste %d\n", i+1);
		printf("%d\n", pontos);
	}

	

	return 0;
}