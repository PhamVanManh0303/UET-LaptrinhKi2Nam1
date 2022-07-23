#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n]; 
	for (int i = 0; i<n; i++) {
		scanf("%d", &a[i]);
		if (a[i] < 0 || a[i] > 100) {
			i--;
			printf("Nhap lai!!!\n"); 
		}  
	} 
	for (int i = 0; i<n; i++) {
		printf("%d ", a[i]); 
	} 
    return 0;
}

