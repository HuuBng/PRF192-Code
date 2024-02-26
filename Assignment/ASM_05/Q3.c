#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 101
char* lTrim(char* s);
char* rTrim(char* s);
char* trim(char* s);
void clear(); //clear the buffer
//----------------------------------------------------
char* reverseString(char *s){
	char name[MAX][MAX];
	char* token;
	char str[MAX];
	int size, i;
	//Begin your statements here======================
	int k = 0, j = 0;
	int ik;
	strcpy(str, s);
	trim(str);
	size = strlen(str);

	for(i = 0; i < size; i++) {
	 	if(isalpha(str[i]) || (str[i] >= '0' && str[i] <= '9')) {
			name[k][j] = str[i];
			j += 1;
	 	} else if (str[i] == ' ' || str[i] == '\0') {
	 		name[k][j] = '\0';
	 		k += 1;
	 		j = 0;
		 }
	}

	i = 0;
	for(ik = k; ik >= 0; ik-- ) {
		for(j = 0; j < strlen(name[ik]); j++) {
			str[i] = name[ik][j];
			i++;
		}
		str[i] = ' ';
		i++;
	}

	for(i = 0; str[i] != '\0'; i++) {
			str[i] = toupper(str[i]);
	}

//	// Debugger
//	printf("\nk%d-j%d\n", k, j);
//	for (i = 0; i <= k; i++) {
//		printf("-%s-", name[i]);
//	}

	//End your statements=============================
	return str;
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{
  system("cls");
  printf("\nTEST Q3 (2 marks):\n");
  int n;
  char s[MAX], *str;
  printf("Enter s : "); scanf("%100[^\n]",s);
  str = reverseString(s);
  printf("\nOUTPUT:\n");
  printf("%s",str);
  printf("\n");
  system ("pause");
  return(0);
}
//============================================================
//=== Do not add new or change statements in this function.===
void clear(){
	char c;
	while((c = getchar())!='\n');
}
//=== Do not add new or change statements in this function.===
char* lTrim(char* s) {
	int i = 0;
	while (s[i] == ' ')	i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}
//=== Do not add new or change statements in this function.===
char* rTrim(char* s) {
	int i = strlen(s)-1;
	while (s[i] == ' ') i--;
	s[i+1] = '\0';
	return s;
}
//=== Do not add new or change statements in this function.===
char* trim(char* s) {
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr != NULL) {
		strcpy(ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	return s;
}
