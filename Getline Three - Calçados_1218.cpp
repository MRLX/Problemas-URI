#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	char s, e;
	int igual, fm, mc, caso=0;
	while(scanf("%d", &n) != EOF)
	{
		if(caso!=0) printf("\n");
		igual = 0;
		fm = 0;
		mc = 0;
		while(scanf("%d %c%c", &m, &s, &e) == 3)
		{
			if(n==m)
				igual++;
			if(n==m && s=='F')
				fm++;
			else if(n==m && s=='M')
				mc++;
			if(e=='\n')break;
		}
		caso++;
		printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n", caso, igual, fm, mc);
	}
	return 0;
}
