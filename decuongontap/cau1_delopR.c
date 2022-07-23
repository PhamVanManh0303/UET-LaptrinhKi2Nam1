#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int timPhanTuChinh(int a[], int n) {
	int max = 0;
	for (int i = 0; i<n; i++) {
		if (a[i] > max) max = a[i]; 
	} 
	int b[max];
	for (int i = 0; i <= max; i++) {
		b[i] = 0; 
	} 
	for (int i = 0; i < n; i++) {
		b[a[i]]++; 
	} 
	int tansuat = 0;
	int c ; 
	for (int i = 0; i <= max; i++) {
		if (b[i] > tansuat ) {
			tansuat = b[i];
			c = i; 
		} 
	}
	printf("%d\n", tansuat); 
	return c; 
} 

int main() {
	int n;
	scanf("%d", &n);
	int a[1000];
	for (int i = 0; i<n; i++) scanf("%d", &a[i]);
	printf("%d", timPhanTuChinh(a,n)); 
    return 0;
}

