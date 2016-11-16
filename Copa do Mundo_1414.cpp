#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int n, m;
	char time[11];
	int empate, ponto;
	int max_ponto;
	scanf("%d %d", &n, &m);
	while(n != 0)
	{
		empate = 0;
		max_ponto = m*3;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			fflush(stdin);
			scanf("%s %d", time, &ponto);
			empate += ponto;
		}
		printf("%d\n", max_ponto - empate);
		scanf("%d %d", &n, &m);
		
	}
	return 0;
}
