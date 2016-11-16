#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
	char s[100];
	int cont;
	int n;
	long long int t;
	scanf("%d", &n);
	cin.ignore();
	while(n != 0){
		cin.getline(s, 100);
		cont = 0;
		for(int i=0;i<strlen(s);++i){
			if(s[i]=='!'){
				cont++;
			}
		}
		t = atoi(s);
		for (int i = t-cont; i >=1 ; i=i-cont)
		{
			t = t*i;
		}
		printf("%lld\n", t);
		--n;
	}
	return 0;
}
