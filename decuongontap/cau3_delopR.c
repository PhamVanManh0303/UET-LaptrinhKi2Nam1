#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void chuanhoa(char *s) {
	int l = strlen(s);
	s[l-1] = '\0'; 
} 

void xoaktgiong(char *s,int *len) {
	chuanhoa(s); 
	int l = strlen(s);
	int i ,j; 
	for (i = 0; i<strlen(s); i++) {
		int count = 0;
		for ( j = i; ; j++) {
			if (s[j]==s[i]) count ++;
			else break; 
		} 
		if (count > 1) {
			for ( j = i; j < strlen(s); j++) {
				s[j] = s[j + count];
			}
			i-=1;
			l -= count; 
		} 
	}
	*len = l; 
}

int main() {
	char s[1000];
	fgets(s, sizeof(s), stdin);
	int l=strlen(s)-1 ;
	xoaktgiong(s,&l);
	if ( l == 0) printf("empty");
	else {
		int i;
		for (i = 0; i<=l; i++) {
			printf("%c", s[i]);
		}
	}
	return 0;
}

