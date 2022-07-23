#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void chuan(char *s) {
	int l = strlen(s);
	s[l-1] = '\0'; 
} 

int main() {
	char s[1000];
	fgets(s, sizeof(s),stdin);
	int l = strlen(s);
	chuan(s); 
	for (int i = 0; i< l/2; i++) {
		if (s[i] != s[l-i-2]) {
			printf("No");
			return 0; 
		} 
	} 
	printf("yes"); 
    return 0;
}

