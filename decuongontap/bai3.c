#include<stdio.h>
#include<string.h>

void demChuCai(char *s) {
	int i;
	int size = strlen(s);
	int b[97+26] = {0};
	for (i = 0; i < size; i++) {
		char w = s[i];
		b[(int)w]++;
	}
	int count = 0;
	for (i = 97; i < 123; i++) {
		if (b[i] != 0) {
			printf("%c %d\n", (char) i, b[i]);
			count++;
		}
	}
	int space = 0;
	for (i = 0; i< size; i++) {
		if (s[i] == ' ') {
			space++;
		}
	}
	printf("Space %d", space);
	printf("\n%d", count);
}

int main() {
	char s[1000];
	fgets(s, sizeof(s), stdin);
	demChuCai(s);
	return 0;
}
