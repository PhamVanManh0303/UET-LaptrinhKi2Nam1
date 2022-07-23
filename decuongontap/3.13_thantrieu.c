#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int soNT(int n) {
	int count = 0; 
	for (int i = 1; i<=n; i++) {
		if (n%i == 0) count ++; 
	} 
	if (count == 2) return 1;
	else return 0; 
} 

void lietkesnt(int n) {
	int count = 0;
	for  (int i = 2; count < n;i++) {
		if (soNT(i) == 1) {
			count ++;
			printf("%d ", i); 
		} 
	}
} 

void fibonanci(int n) {
	int n1 = 0;
	int n2 = 1;
	if (n == 1) printf("0");
	if (n == 2) printf("1");
	printf("0 1 "); 
	for ( int count = 2; count < n; count++) {
		int m = n1+n2;
		printf("%d ", m);
		n1 = n2;
		n2 = m; 
	} 
} 

void sochinhphuong(int n) {
	int count = 0;
	for (int i = 0; count < n; i++) {
		if ((int) sqrt(i) * sqrt(i) == i) {
			printf("%d ", i);
			count ++; 
		} 
		
	} 
} 

int main() {
	int n;
	scanf("%d", &n);
	lietkesnt(n); 
	printf("\n"); 
	fibonanci(n); 
	printf("\n"); 
	sochinhphuong(n); 
    return 0;
}

