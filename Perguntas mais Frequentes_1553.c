#include<stdio.h>
#include<stdlib.h>

int ordena (const void *a, const void *b){
	if(*(int*)a == *(int*)b)
		return 0;//numeros iguais
	else if(*(int*)a < *(int*)b)
		return -1;//a vem antes de b
   else
   		return 1;//a vem depois de b
}



int main(){
	int n, k, i, cont = 0, resp = 0, j, l=0;
	scanf("%d%d", &n, &k);
	while(n != 0 && k != 0){
		int pergunta[n];
		int vetorexclusivo[n];
		for(i=0;i<n;++i){
			scanf("%d", &pergunta[i]);
		}
		qsort(pergunta, n, sizeof(int), ordena);
		int maior = 0;
		for(i=0;i<n;++i){
			if(pergunta[i]>maior){
				vetorexclusivo[l]=pergunta[i];
				maior = pergunta[i];
				++l;
			}
		}
		for(i=0;i<l;++i){
			cont = 0;
			for(j=0;j<n;++j){
				if(vetorexclusivo[i]==pergunta[j]) ++cont;
				if(j==n-1){
					if(cont>=k){
						cont = 0;
						++resp;
					}
			}
		}
	}
		printf("%d\n", resp);
		resp = 0;
		cont = 0;
		l = 0;
		scanf("%d%d", &n, &k);
	}
	return 0;
}
