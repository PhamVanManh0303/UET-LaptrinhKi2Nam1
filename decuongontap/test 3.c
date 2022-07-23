#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap_num(int a,int b){
	int x=a;
	a=b;
	b=x;
}
void swap_char(char a,char b){
	char x=a;
	a=b;
	b=x;
}
void kiem_tra(int n,char str[]){
	int len[n];
	for(int i=0;i<n;i++)
		len[i]=strlen(str[i]);
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++)
			if(len[i]<len[j]){
				swap_char(str[i],str[j]);
				swap_num(len[i],len[j]);
			}
	printf("\nNgon ngu ngan nhat cuoi cung la %s",str[n-1]);
}
int main(){
	int n; scanf("%d",&n);
	char str[n][100];
	for(int i=0;i<n;i++){
		printf("\nTen ngon ngu lap trinh thu %d ",i+1);
		fgets(str[i],sizeof(str),stdin);
	}
	kiem_tra(n,str);
}
