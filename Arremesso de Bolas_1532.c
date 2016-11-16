#include<stdio.h>
#include<stdbool.h>



bool teste(int v, int n)
{
	int pos = 0;
	int aux = 0;
	while(v!=0)
	{
		pos = pos + v;
		aux += v;
		if(aux == (v*v)){
			aux = 0;
			v= v - 1;
		}
		if(pos == n)
			return true;
	}
		return false;
}

int main()
{
	int n, v, i;
	bool caravela;
	scanf("%d%d", &n, &v);
	while(n != 0 && v != 0)
	{
		caravela = false;
		for (i = 1; i <= v; ++i)
		{
			if(teste(i, n) == true)
			{
				caravela = true;
				break;
			}

		}
		if(caravela == true)
			printf("possivel\n");
		else
			printf("impossivel\n");
		scanf("%d%d", &n, &v);
	}
	return 0;
}
