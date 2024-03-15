#include<stdio.h>
int main(){
	int l,i,w=0;
	char statement[100];
	printf("Enter the length of sentence : ");
	scanf("%d",&l);
	printf("Enter the sentence : ");
	for( i=0; i<l;i++){
	scanf("%c",&statement[i]);
	}
	for(i=0;i<l;i++){
		if((int)statement[i]==32){
			w++;
		}
		else{
			continue;
		}
	}
	printf("There are %d words , %d letters and %d spaces in above sentence",w+1,l-w+1,w);
	return 0;
}
	
