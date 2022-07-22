#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include <time.h>

int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}

int main() {
//	srand((int)time(0));
	int m = 10,n = 10;
	//scanf("%d%d", &m,&n); 
	int a[1000][1000] = {0}; 
	
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = random(0,255); 
		} 
	} 
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[i][j]); 
		} 
		printf("\n"); 
	} 
    return 0;
}

