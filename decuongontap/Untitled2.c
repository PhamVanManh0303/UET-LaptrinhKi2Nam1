#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void nhap(int a[], int n) {
	printf("Nhap cac phan tu cua mang\n"); 
	for (int i =0; i<n;i++) {
		scanf("%d", &a[i]); 
	} 
} 

void sapxep(int a[], int n) {
	for (int i = 0; i<n; i++) {
		for (int j = i+1; j<n; j++) {
			if (a[i] >a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp; 
			} 
		} 
	} 
} 
int chiso(int a[], int n,int x) {
	for ( int i = 0; i<n; i++) {
		if (a[i] == x) return i; 
	} 
	return -1; 
} 

void hienthi(int b[], int dem[], int size)  {
	for (int i = 0; i<size; i++) {
		printf("%d:%d\n", b[i],dem[i]); 
	} 
}

void dem(int a[], int n) {
	int b[100];
	int dem[100];
	int size = 0; 
	for (int i = 0; i<n; i++) {
		int index = chiso(b,size,a[i]); 
		if (index == -1) {
			b[size] = a[i];
			dem[size] = 1; 
			size ++; 
		} else dem[index]++; 
	} 
	hienthi(b, dem, size); 
} 
int main() {
	int n;
	scanf("%d", &n);
	int a[100];
	nhap(a,n);
	sapxep(a,n); 
	dem(a,n); 
	
    return 0;
}

