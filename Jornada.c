#include <stdio.h>

int main(void){

	long long int numEstrelas;
	scanf("%lld", &numEstrelas);

	long long int carneiros[numEstrelas], estrela[numEstrelas];
	long long int carneirosRestantes = 0, estrelasAtacadas = 0;
	long long int i, j;

	for(i=0; i<numEstrelas; i++){
		scanf("%lld", &carneiros[i]);
		estrela[i] = 0;
	}

	j = 0;
	while(j>=0 && j<numEstrelas){
		if((carneiros[j] % 2 == 0) && (j==0)){
			estrela[j] = 1;
			if(carneiros[j] > 0)
				carneiros[j]--;
			j = -1;
		}
		else if((carneiros[j] % 2 == 1) && (j == numEstrelas-1)){
			estrela[j] = 1;
			if(carneiros[j] > 0)
				carneiros[j]--;
			j = numEstrelas;

		}
		else if((carneiros[j] % 2 == 0)){
			estrela[j] = 1;
			if(carneiros[j] > 0)
				carneiros[j]--;
			j--;
		}
		else if((carneiros[j] % 2 == 1)){
			estrela[j] = 1;
			if(carneiros[j] > 0)
				carneiros[j]--;
			j++;
		}
	}
	for(i=0; i<numEstrelas; i++){
		carneirosRestantes += carneiros[i];
		estrelasAtacadas += estrela[i];
	}

	printf("%lld %lld\n", estrelasAtacadas, carneirosRestantes);
	return 0;
}
