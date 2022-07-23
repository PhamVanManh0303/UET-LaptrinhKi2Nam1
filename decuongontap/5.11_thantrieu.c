#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void hienthi(char s[100][20], int size) {
	for (int i = 0; i<size; i++) {
		printf("%s\t", s[i]); 
	} 
} 

void sapxep(char s[100][20], int size) {
	for (int i = 0; i<size; i++){
		for (int j = i+1; j<size; j++) {
			if (s[i][0] > s[j][0]) {
				char *p=(char*)malloc(sizeof(char));
				strcpy(p,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],p);  
			} 
		} 
	} 
} 
void tach(char *s) {
	char res[100][20];
	int i = 0; 
	char *p; 
	const char *delim = " ,.\t\n";
	for (p = strtok(s,delim); p != NULL; p = strtok(NULL,delim)) {
		strcpy(res[i], p);
		i++; 
	}
	sapxep(res,i); 
	hienthi(res, i);  
} 

int main() {
	char s[1000];
	fgets(s, sizeof(s), stdin);
	tach(s); 
    return 0;
}

