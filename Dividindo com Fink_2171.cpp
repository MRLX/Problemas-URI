#include <iostream>
#include <stdio.h>

using namespace std;
/* 1
	1 2 3 6 10*/

int main(int argc, char const *argv[])
{
	int t;
	int aux;
	int pica_pau, fink;
	while(scanf("%d", &t))
	{
		if(t==0)
			return 0;
		pica_pau = 0;
		fink = 0;
		while(true)
		{
			pica_pau += 1;//1 2 3 4
			fink += pica_pau;//1 3 6 10
			if(fink + pica_pau>=t)
			{
				if(fink + pica_pau>t)
				{
					aux = (fink + pica_pau) - t;
					pica_pau = pica_pau - aux;
					break;
				}
				break;
			}
		}
		printf("%d %d\n",fink, pica_pau);
	}
	return 0;
}
