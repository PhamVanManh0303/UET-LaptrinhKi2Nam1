#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main() {
	char s[1000];
	fgets(s, sizeof(s), stdin);
	int count = 0; 
	for (int i = 0; i<strlen(s); i++) {
		if (s[i] == ' ' || s[i] == ',' || s[i] == '.' || s[i] == '-') {
			count ++; 
		} 
	} 
	printf("%d", count +1); 
    return 0;
}

