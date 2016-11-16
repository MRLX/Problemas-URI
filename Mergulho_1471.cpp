#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	
	int n, r, i, cont, j, num;
	while(scanf("%d%d", &n, &r) != EOF)
	{
		int v[r];
		for(i=0;i<r;++i)
			scanf("%d", &v[i]);
		if(n==r)
		{
			printf("*\n");
		}
		else
		{
			for(i=1;i<=n;++i)
			{
				cont = 0;
				for(j=0;j<r;++j)
				{
					if(i==v[j])
						continue;
					else
					{
						num = i;
						cont++;
					}
				}
				if(cont==r)
					printf("%d ", num);
			}
			printf("\n");
		}
	}
	return 0;
}
