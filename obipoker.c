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
		if(mao[0] != mao[i] - i)
			return 0;
	}
	return 1;
}

int isQuadra(int* mao){
	int i;
	int sum = 0;
	int tam = 5; // numero de cartas
	for(i=0; i<tam; i++){
		if(mao[0] == mao[i])
			sum++;
	}
	if(sum == 4)
		return 1;
	return 0;
}

int isFullHouse(int* mao){
	int i, j = 0;
	int sum = 0;
	int tam = 5; // numero de cartas
	int rep[5]; // vetor para armazenar as cartas repetidas

	for(i=0; i<tam; i++){
		if(mao[0] == mao[i])
			sum++;
		
		if(mao[0] != mao[i]){
			rep[j] = mao[i];
			j++;
		}

	}
	if(sum == 3){
		if(rep[0] == rep[1])
			return 1;

	}
	return 0;
}

int isTrinca(int* mao){
	int i;
	int sum = 0;
	int tam = 5; // numero de cartas
	for(i=0; i<tam; i++){
		if(mao[0] == mao[i])
			sum++;
	}
	if(sum == 3)
		return 1;
	return 0;
}

int isDoisPares(int* mao){
	int i, j = 0;
	int sum = 0;
	int tam = 5; // numero de cartas
	int rep[5]; // vetor para armazenar as cartas repetidas

	for(i=0; i<tam; i++){
		if(mao[0] == mao[i])
			sum++;
		
		if(mao[0] != mao[i]){
			rep[j] = mao[i];
			j++;
		}

	}
	if(sum == 2){
		if(rep[0] == rep[1])
			return 1;

	}
	return 0;
}

int isPar(int* mao){
	int i;
	int sum = 0;
	int tam = 5; // numero de cartas
	for(i=0; i<tam; i++){
		if(mao[0] == mao[i])
			sum++;
	}
	if(sum == 2)
		return 1;
	return 0;
}



int main(void){

	

	return 0;
}