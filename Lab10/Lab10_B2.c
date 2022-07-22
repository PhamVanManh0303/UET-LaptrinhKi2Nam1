#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}

int tangDan(int a[], int n, int x) {
	
	if (x < n - 20 ) {
		for (int i = x; i < n; i++) {
			if (a[i+1] < a[i]) return 0; 
		}
	} else {
		for (int i = x; i < x+20; i++) {
			if (a[i+1] < a[i]) return 0; 
		}
	} 
	return 1; 
} 

int giamDan(int a[], int n, int x) {
	int check = 1;
	if (x > 20 ) {
		for (int i = x - 20; i < x; i++) {
			if (a[i+1] < a[i]) return 0; 
		}
	} else {
		for (int i = 0; i < x; i++) {
			if (a[i+1] < a[i]) return 0; 
		}
	} 
	return check; 
} 

int demNhieu(int a[], int n, int x) {
	int dem = 0; 
	if (x > 20 && x < n - 20) {
		for (int i = x -20; i < x; i++) {
			if (a[i] > a[i-1] && a[i] > a[i+1] ) {
				dem++; 
			} 
		} 
		for (int i = x; i < x+20; i++) {
			if (a[i] < a[i-1] && a[i] < a[i+1] ) {
				dem++; 
			} 
		} 
	} else if (x <= 20) {
		for (int i = 0; i < x; i++) {
			if (a[i] > a[i-1] && a[i] > a[i+1] ) {
				dem++; 
			} 
		} 
		for (int i = x+1; i < 40 - x; i++) {
			if (a[i] < a[i-1] && a[i] < a[i+1] ) {
				dem++; 
			} 
		} 
	} else {
		for (int i = 40 - n + x; i < x; i++) {
			if (a[i] > a[i-1] && a[i] > a[i+1] ) {
				dem++; 
			} 
		} 
		for (int i = x; i < n; i++) {
			if (a[i] < a[i-1] && a[i] < a[i+1] ) {
				dem++; 
			} 
		} 
	} 
} 

void cucTieuDP(int a[], int n){
	for (int i = 0; i < n; i++){
		if (tangDan(a,n,i) == 1 && giamDan(a,n,i) == 1) {
			printf("Gia tri cuc tieu dia phuong: %d\n", a[i]); 
		} else {
			for (int i = 0; i < n; i++) {
				if (demNhieu(a,n,i) <= 4) {
					printf("Gia tri cuc tieu dia phuong: %d\n", a[i]);
				} 
			} 
		} 
		
	} 
} 
int main() {
	int n;
	scanf("%d", &n);
	int a[1000];
	for (int i = 0; i< n; i++) {
		scanf("%d",&a[i]); 
	} 
	cucTieuDP(a,n); 
    return 0;
}


