#include<iostream>
#include<cstring>
#include<stdio.h>

using namespace std;

int main(){
	string s;
	cout.precision(2);
	int soma=0, cont=0;
	cin>>s;
	for(int i=0;i<s.size();++i){
		if(s[i]=='1' && i+1 < s.size() && s[i+1]=='0'){
			soma+=10;
			cont++;
		}
		else
			soma+=s[i]-'0';
	}
	cont = s.size()-cont;
	printf("%.2f\n", (double)soma/(double)cont);
	
	return 0;
}
