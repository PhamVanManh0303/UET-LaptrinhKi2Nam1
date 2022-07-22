#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int binarySeach(int a[], int x, int n) {
	int lo = 0;
	int hi = n-1;
	while (lo <= hi) {
		int mid = (lo + hi) / 2; 
		if ( a[mid] == x ){
			return mid; 
		} else 
		if (x > a[mid]) {
			lo = mid +1; 
		} else hi = mid -1; 
	} 
	return -1; 
} 


int main() {
	int n;
	scanf("%d", &n); 
	int *a;
	a = (int*)malloc(n*n * sizeof(int));
	for (int i = 0; i < n*n; i++) {
		scanf("%d", &a[i]); 
	} 
	
	// cau b 
//	for (int i = 0; i < n*n; i += n){
//		a[i] = 1; 
//		i++; 
//	} 

	printf("\nMang in theo chieu ngang\n"); 
	for (int i = 0; i < n*n; i++) {
		printf("%d ", a[i]); 
	} 

	printf("\nMang in theo hang và cot\n"); 
	for (int i = 0; i < n*n; i++) {
		if (i % n == 0) {
			printf("\n%d ", a[i]); 
		} 
		else printf("%d ", a[i]); 
	} 
	
	// sap xep mang 
	for (int i = 0; i < n*n; i++) {
		for (int j = 0; j < n*n; j++) {
			if (a[i] < a[j]) {
				int temp  = a[i];
				a[i] = a[j];
				a[j] = temp; 
			} 
		} 
	} 
	
	printf("\n\nMang da sap xep:"); 
	for (int i = 0; i < n*n; i++) {
		if (i % n == 0) {
			printf("\n%d ", a[i]); 
		} 
		else printf("%d ", a[i]); 
	} 
	
	int x;
	printf("\nNhap so x: "); 
	scanf("%d", &x);
	if (binarySeach(a, x, n*n) == -1) {
		printf("Khong tim thay x"); 
	} else 
	printf("\nx o vi tri %d", binarySeach(a, x, n*n)); 
	
	// c
	printf("\nThoi gian chuyen file %f",(float) n*n*sizeof(a[0])/16000); 
	free(a); 
    return 0;
}

