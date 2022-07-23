#include<stdio.h>
#include<stdlib.h>

int main() {
	int a[100];
	int n,i,j;
	scanf("%d",&n);
	for(i = 0; i< n; i++) {
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	int sum = 0;
	for(i = 0; i < n; i++) {
		for(j = 1; j < a[i]; j++) {
			if(a[i] % j == 0)
				sum+=j;
		}
		if(sum == a[i])
			printf("%d ", a[i]);
	}
}
