#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//xoa dau xuong dong o cuoi
void xoaxuongdong(char *s) {
	int l = strlen(s);
	s[l-1] = '\0'; 
} 

//xoa dau cach o dau chuoi 
void xoadaucachdau(char *s) {
	int count =0; 
	for (int i = 0; s[i] == ' '; i++){
		count ++; 
	}
	for (int i = 0; i<strlen(s); i++) {
		s[i] = s[i+count]; 
	} 
} 

//xoa dau cach o cuoi chuoi 
void xoadaucachcuoi(char *s) {
	for (int i = strlen(s)-1; s[i] == ' '; i--) {
		s[i] = '\0'; 
	} 
} 

// xoa dau cach o giua 
void xoadaucachgiua(char *s) {
	for (int i = 0; i< strlen(s); i++) {
		if (s[i] == ' ' && s[i+1] == ' ') {
			for (int j = i+1; j <strlen(s); j++) {
				s[j] = s[j+1]; 
			} 
			i--; 
		} 
	} 
} 

// chuyen ki tu dau thanh chu hoa
void kitudauHoa(char *s) {
	if (s[0] >= 'a' && s[0] <='z') s[0]-=32; 
	for (int i = 1; i<strlen(s); i++) {
		if (s[i] == ' ') {
			if (s[i+1] >= 'a' && s[i+1] <='z') {
				s[i+1] -= 32; 
			} 
		} 
	} 
} 

// ki tu giua cua tu khong viet hoa
void kitugiuaThuong(char *s) {
	for (int i = 0; i<strlen(s); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			for (int j = i+1; s[j] != ' '; j++) {
				if (s[j] >= 'A' && s[j] <= 'Z') s[j] += 32; 
			} 
		} 
	} 
}

//chuan hoa xau 
void chuanhoaxau(char *s) {
	xoaxuongdong(s); 
	xoadaucachdau(s);
	xoadaucachcuoi(s);
	xoadaucachgiua(s);
	kitudauHoa(s); 
	kitugiuaThuong(s); 
	for (int i = 0; i<strlen(s); i++) {
		printf("%c", s[i]); 
	} 
} 
int main() {
	char s[1000];
	fgets(s, sizeof(s),stdin);
	chuanhoaxau(s); 
	printf("\n%d", strlen(s)); 
    return 0;
}

