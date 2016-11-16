#include <iostream>
#include <stdio.h>
#include <stdbool.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, soma=0, v45, v40, v10;
	bool ans = false;
	int cont = 0;
	scanf("%d", &n);
	int voto[n];
	for (int i = 0; i < n; ++i){
		scanf("%d", &voto[i]);
		soma += voto[i];
	}
	v45 = soma*0.45;
	v40 = soma*0.40;
	for (int i = 0; i < n; ++i){
		if(voto[i]>=v45){
			ans = true;
			break;
		}
		else if(voto[i]>=v40){
			int k = voto[i];
			v10 = soma*0.10;
			for (int j = 0; j < n; ++j){
				if((k-voto[j])>=v10){
					cont++;
				}
			}
			if(cont==n-1){
				ans=true;
				break;
			}
		}
	}
	if(ans)
		printf("1\n");
	else
		printf("2\n");
	return 0;
}
