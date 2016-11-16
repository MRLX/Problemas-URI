#include <iostream>
#include <stdio.h>

using namespace std;

long long int fat(int n)
{
	if(n==0)
		return 1;
	else
		return n * fat(n-1);
}

int main(int argc, char const *argv[])
{
	/* code */
	int m, n;
	while(scanf("%d%d", &m, &n) != EOF)
	{
		printf("%lld\n",  fat(m) + fat(n));
	}
	return 0;
}
