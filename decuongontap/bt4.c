#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int a[100][100];
int b[100][100]; 

void congMaTran(int m, int n) {
	int c[100][100]; 
	for (int i = 0; i < m; i ++) {
		for (int j = 0; j < n; j++) {
			c[i][j] = a[i][j] + b[i][j]; 
		} 
	} 
	for (int i = 0; i < m; i ++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", c[i][j]); 
		} 
		printf("\n"); 
	}  
}
int main() {
	int m,n;
	scanf("%d%d", &m,&n); 
	for (int i = 0; i < m; i ++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]); 
		} 
	}  
	for (int i = 0; i < m; i ++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &b[i][j]); 
		} 
	} 
	congMaTran(m,n); 
    return 0;
}

