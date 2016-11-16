#include <iostream>
#include <stdio.h>

using namespace std;

/* 
0     1     1     1     2     2     4     8     12 	  96	108	 10368 

input
1
4
8
14
11

output
0
1
8
108615168
108   
*/
int main(int argc, char const *argv[])
{
	long long int UmMalucoNoPedaco[17];
	long long int n;
	UmMalucoNoPedaco[0]=0;
	UmMalucoNoPedaco[1]=1;
	UmMalucoNoPedaco[2]=1;
	UmMalucoNoPedaco[3]=1;
	UmMalucoNoPedaco[4]=2;
	UmMalucoNoPedaco[5]=2;
	UmMalucoNoPedaco[6]=4;
	UmMalucoNoPedaco[7]=8;
	UmMalucoNoPedaco[8]=12;
	UmMalucoNoPedaco[9]=96;
	UmMalucoNoPedaco[10]=108;
	//UmMalucoNoPedaco[11]=10368;
	for (int i = 11; i <= 16; i=i+2)
	{
		UmMalucoNoPedaco[i]=UmMalucoNoPedaco[i-1]*UmMalucoNoPedaco[i-2];
		UmMalucoNoPedaco[i+1]=UmMalucoNoPedaco[i]+UmMalucoNoPedaco[i-1];
	}
	while(scanf("%d", &n) != EOF)
	{
		printf("%lld\n", UmMalucoNoPedaco[n-1]);
	}
	return 0;
}
