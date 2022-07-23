#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void sapxep(int a[], int n) {
	for (int i = 0; i<n; i++) {
		for (int j = i+1; j<n; j++) {
			if (a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int charhistogram(char *xau) {
	int l = strlen(xau);
	int b[97+26] = {0};
	for (int i = 0; i<l; i++) {
		char c = xau[i];
		b[(int) c]++;
	}
	int max = b[97];
	int pos;
	for (int i = 97; i < 123; i++) {
		if (b[i] > max) {
			max = b[i];
			pos = i;
		}
	}
	printf("%c %d\n", (char) pos, b[pos]);
	int max2;
	for (int i = 97; i<123; i++) {
		for (int j = 97; j<123; j++) {
			max2 = b[97];
			if (b[j] > max2 && b[j] < max) {
				max2 = b[j];
				pos = j; 
			}
		}
		printf("%c %d", (char) pos, b[pos]);
		max = max2; 
	}

	return 0;
}

int main() {
	char s[100];
	fgets(s, sizeof(s), stdin);
	int c = charhistogram(s);
	return 0;
}

