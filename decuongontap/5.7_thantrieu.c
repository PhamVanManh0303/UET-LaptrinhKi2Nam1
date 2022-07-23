#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

// kiem tra dau cach hay tab
int khoangtrang(char s) {
	if (s == ' ' || s == '\t' || s== '\n') {
		return 1;
	}
	return 0;
}

// tim vi tri tu co do dai lon nhat 
int timViTri(char* str, int* length) {
	int len = 0;
	int lenMax = 0;
	int pos = 0;
	int posCurrent = 0;
	int size = strlen(str);
	int i;
	for(i = 0; i< size; i++) {
		if(khoangtrang(str[i]) == 0) { //hello ..
			posCurrent = i - len;
			len++;
		} else {
			if(len > lenMax) {
				lenMax = len;
				pos = posCurrent;
			}
			len = 0;
		}
	}
	
	*length = lenMax;
	return pos;
}
/*
void timLenMax(char *s, int *dodaimax, int *vitrimax) {
	int len = 0;
	int lenMax = 0;
	int vitriMax = 0;
	int vitri = 0;
	for (int i = 0; i<strlen(s); i++) { //than trieu  
		if (khoangtrang(s[i]) == 0) {
			vitri = i - len;
			len++; 
		} else {
			if (len > lenMax) {
				lenMax = len;
				vitriMax = vitri; 
			}
			len = 0; 
		} 
	} 
	*dodaimax = lenMax;
	*vitrimax = vitriMax;	 
} 
*/
// hien thi tu dai nhat 
void hienThiTu(char *s, int len, int vitri) {
	for (int i = vitri; i<len+vitri; i++) {
		printf("%c", s[i]); 
	} 
	printf("\nDo dai la: %d", len);
	printf("\to vi tri: %d", vitri); 
} 

int main() {
	char s[1000];
	fgets(s, sizeof(s), stdin);
	int lenMax = 0, vitrimax = 0;
	//timLenMax(s, &lenMax, &vitrimax); 
	vitrimax = timViTri(s, &lenMax); 
	hienThiTu(s,lenMax,vitrimax); 
	return 0;
}

