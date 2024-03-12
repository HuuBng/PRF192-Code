#include <stdio.h>
#include <string.h>

int main() {
	system("cls");
  	printf("\nTEST Q4 (3 marks):\n");
    char s1[100], s2[100];

    printf("Enter the first string (s1): ");
    gets(s1);

    printf("Enter the second string (s2): ");
    gets(s2);
    int count = 0;
	//Begin your statements here

    // 1.
  	int i;
 		for (i = 0; s1[i] != '\0'; i++) {
   		if (strncmp(&s1[i], s2, strlen(s2)) == 0) {
      	count++;
    	}
  	}

		// 2.
		// char *add = strstr(s1, s2);
		// while(add != NULL) {
		// 	count++;
		// 	add = add + strlen(s2);
		// 	add = strstr(add, s2);
		// }


	//End your statements
	printf("OUTPUT:\n");
    printf("%d\n", count);
	system("pause");
    return 0;
}
