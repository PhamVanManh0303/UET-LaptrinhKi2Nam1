#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void nhap(int a[], int n) {
	for (int i = 0; i<n; i++) {
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]); 
	} 
} 

void xoa(int a[], int n, int k) {
	for (int i = k-1; i<n;i++) {
		a[i] = a[i+1]; 
	} 
} 

void xuat (int a[], int n) {
	for (int i = 0;i<n-1; i++) {
		printf("%d\n", a[i]); 
	} 
} 
int main() {
	int n;
	printf("So phan tu: "); 
	scanf("%d", &n); 
	int a[n];
	nhap(a,n);
	int  vitri;
	printf("Vi tri xoa: ");
	scanf ("%d", &vitri);
	xoa(a,n,vitri);
	xuat(a,n);  
    return 0;
}

