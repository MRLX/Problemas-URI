#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tam;
	int n;
	scanf("%d", &n);
	cin.ignore();
	string s;
	while(n != 0)
	{
		getline(cin, s);
		tam = s.size()/2;
		for (int i = tam-1; i >= 0; --i)
		{
			cout<<s[i];
		}
		for (int i = s.size()-1; i >= tam; --i)
		{
			cout<<s[i];
		}
		cout<<endl;
		--n;
	}
	return 0;
}
