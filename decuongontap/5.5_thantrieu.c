#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void lower(char *s) {
	for (int i = 0; i<strlen(s); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32; 
		} 
	} 
} 

// phan biet hoa và thuong
void solanxuathien1(char *s) {
	char b[97+26] = {0};
	for (int i = 0; i< strlen(s); i++) {
		char c = s[i];
		b[(int) c]++;
	}
	for (int i = 97; i<97+26; i++) {
		if (b[i] > 0) printf("%c: %d\n", (char) i, b[i]);
	}
	for (int i = 65; i<65+26; i++) {
		if (b[i] > 0) 	printf("%c: %d\n", (char) i, b[i]);
	}
}

// khong phan biet hoa va thuong

void solanxuathien2(char *s) {
	char b[97+26] = {0};
	lower(s); 
	for (int i = 0; i<strlen(s); i++) {
		char c = s[i];
		b[(int) c] ++;
	}
	for (int i = 97; i<97+26; i++) {
		if (b[i] > 0) printf("%c: %d\n", (char) i, b[i]);
	}
}

int main() {
	char s[1000];
	fgets(s,sizeof(s), stdin);
	solanxuathien1(s);
	solanxuathien2(s); 
	return 0;
}

