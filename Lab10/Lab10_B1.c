#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include <time.h>

int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}

int main() {
	srand((int)time(0));
	int m,n;
	scanf("%d%d", &m,&n);
	int a[500][500];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			a[i][j] = random(0,255); 
		} 
	} 
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++){
//			printf("%d ", a[i][j]); 
//		} 
//		printf("\n"); 
//	} 
	int b[500][500]; 
	int luaChon; 
	do {
		printf("1.Chieu tu trai sang\n"); 
		printf("2.Chieu tu phai sang\n");
		printf("3.Chieu tu tren xuong\n");
		printf("4.Chieu tu duoi len\n");
		printf("0.Thoat\n"); 
		scanf("%d", &luaChon);
		switch(luaChon) {
			case 1: { // chieu tu trai sang 
				for (int i = 0; i < m; i++ ) {
					for (int j = 1; j < n; j++) {
						b[i][j] = a[i][j] - a[i][j-1]; 
					} 
				}
				for (int i = 0; i < m; i++ ) {
					for (int j = 0; j < n; j++) {
						if (b[i][j] > 100) {
						 	a[i][j] = 42; 
						} else a[i][j] = 32; 
					} 
				}
				for (int i = 0; i < m; i++ ) {
					for (int j = 0; j < n; j++) {
						printf("%c", a[i][j]); 
					} 
					printf("\n"); 
				}
				break;
			} 
			case 2: { // chieu tu phai sang 
				for (int i = 0; i < m; i++ ) {
					for (int j = 0; j < n-1; j++) {
						b[i][j] = a[i][j] - a[i][j+1]; 
					} 
				}
				for (int i = 0; i < m; i++ ) {
					for (int j = 0; j < n; j++) {
						if (b[i][j] > 100) {
						 	a[i][j] = 42; 
						} else a[i][j] = 32; 
					} 
				}
				for (int i = 0; i < m; i++ ) {
					for (int j = 0; j < n; j++) {
						printf("%c", a[i][j]); 
					} 
					printf("\n"); 
				}
				break;
			} 
			case 3: { // chieu tu tren xuong 
				for (int j = 0; j < n; j++ ) {
					for (int i = 0; i < m-1; i++) {
						b[i][j] = a[i-1][j] - a[i][j]; 
					} 
				}
				for (int i = 0; i < m; i++ ) {
					for (int j = 0; j < n; j++) {
						if (b[i][j] > 100) {
						 	a[i][j] = 42; 
						} else a[i][j] = '.'; 
					} 
				}
				for (int i = 0; i < m; i++ ) {
					for (int j = 0; j < n; j++) {
						printf("%c", a[i][j]); 
					} 
					printf("\n"); 
				}
				break;
			} 
			case 4: { // chieu tu duoi len 
				for (int j = 0; j < n; j++ ) {
					for (int i = 0; i < m-1; i++) {
						b[i][j] = a[i][j] - a[i+1][j]; 
					} 
				}
				for (int i = 0; i < m; i++ ) {
					for (int j = 0; j < n; j++) {
						if (b[i][j] > 100) {
						 	a[i][j] = 42; 
						} else a[i][j] = 32; 
					} 
				}
				for (int i = 0; i < m; i++ ) {
					for (int j = 0; j < n; j++) {
						printf("%c", a[i][j]); 
					} 
					printf("\n"); 
				}
				break;
			} 
		} 
	} while(luaChon != 0); 
	
    return 0;
}


