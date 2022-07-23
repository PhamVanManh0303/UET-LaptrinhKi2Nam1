#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[1000];
	for (int i = 0; i<n; i++) {
		scanf("%d", &a[i]); 
	} 
	int pivos = -1; 
	int left = 0, right = 0;
	for (int i = 1; i<n; i++) {
		for (int j = i-1; j>=0; j--) left += a[j];
		for (int j = i+1; j<n; j++) right += a[j];
		if (left == right) {
			pivos = i; 
		} 
		left = 0; 
		right = 0; 
	} 
	printf("%d", pivos); 
    return 0;
}

