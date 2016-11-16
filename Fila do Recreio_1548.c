#include<stdio.h>
#include<stdlib.h>



int ordena(const void * a, const void * b){
	if(*(int*)a == *(int*)b)
		return 0;//numeros iguais
	else if(*(int*)a > *(int*)b)
		return -1;//a vem antes de b
   else
   		return 1;//a vem depois de b
}

int main(){
		int n, m, j, i, cont = 0;
       scanf("%d", &n);
       while(n!=0){
           scanf("%d", &m);
           int nota[m];
           int ordnota[m];
           for(j=0;j<m;++j){
                scanf("%d", &nota[j]);
                ordnota[j] = nota[j];
			}
           	qsort(nota, m, sizeof(int), ordena);
    		for(i=m;i>=0;--i)
       			if(nota[i]==ordnota[i]) ++cont;
       		printf("%d\n", cont);
          	cont = 0;
          	--n; 
       }
	return 0;
}
