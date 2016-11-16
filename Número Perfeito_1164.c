#include <stdio.h>


int main(){
	int i, n;
	long int x, cont = 0;
	scanf("%d", &n);
	while(n != 0 ){
		scanf("%d", &x);
		for(i=1;i<x;++i){
			if(x%i==0)
				cont += i;
		}
		if(cont  == x)
			printf("%ld eh perfeito\n", x);
		else
			printf("%ld nao eh perfeito\n", x);
		cont = 0;
		--n;
	}
	return 0;
}
