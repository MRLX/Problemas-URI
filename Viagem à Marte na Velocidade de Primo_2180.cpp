#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

using namespace std;

bool primo10(int n)
{
	if(n==2||n==3||n==5)
		return true;
	for (int i = 2; i <=(int) sqrt(n); ++i)
	{
		/* code */
		if(n%i==0)
			return false;

	}
	return true;

}

int main()
{
	int p;
	int count = 0;
	long int temp;
	long long int soma = 0;
	scanf("%d", &p);
	while(count<10)
	{
		if(primo10(p)==true)
		{
			soma += p;
			count++;	
		}
		p=p+1;

	}
	temp = 60000000/soma;
	printf("%lld km/h\n%ld h / %ld d\n", soma, temp, temp/24);
	return 0;
}
