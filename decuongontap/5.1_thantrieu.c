#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int n, b;
	scanf("%d%d", &n,&b);
	int sodu[100];
	int m = n;
	int i = 0;
	while (m > 0) {
		sodu[i] = m%b;
		i++;
		m = m/b;
	}	
	if (b > 10) {
		for (int j = 0; j < i; j++) {
			if (sodu[j] <= 9) {
				sodu[j] += 48;
			} else 
			if (sodu[j] >= 10) {
				sodu[j] += 55;
			}
		}
		for ( int j = i-1; j>=0; j--) {
			printf("%c", sodu[j]);
		}
	} else {
		for (int j = i-1; j>=0; j--) {
			printf("%d", sodu[j]);
		}
	}
	
	return 0;
}

