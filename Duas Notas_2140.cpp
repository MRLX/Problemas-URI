#include <iostream>
#include <stdio.h>
#include <stdbool.h>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int n, m;
	int troco;
	bool notas;
	int v[]={2, 5, 10, 20, 50, 100};
	while(scanf("%d%d", &n, &m) && n != 0 && m != 0)
	{
		notas = false;
		troco = m-n;
		for (int i = 5; i >= 0; --i)
		{
			if(troco-v[i]==2 || troco-v[i]==5 || troco-v[i]==10 || troco-v[i]==20 || troco-v[i]==50 || troco-v[i]==100)
			{
				notas = true;
				break;
			}
		}
		if(notas==true)
			printf("possible\n");
		else
			printf("impossible\n");
	}
	return 0;
}
