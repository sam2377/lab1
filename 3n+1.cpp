#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
int main(){
	int input;
	scanf("%d",&input);
	printf("\n%d ",input);
	while(input!=1){
		if(input%2==0){
			input=input/2;
			printf("%d ",input);
		}
		else{
			input=input*3+1;
			printf("%d ",input);
		}
	}
	return 0;
}
