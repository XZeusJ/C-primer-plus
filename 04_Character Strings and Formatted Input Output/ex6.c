#include <stdio.h>
#include <string.h>


int main(void){
	char f_name[20];
	char l_name[20];

	printf("Enter your first and last name: ");
	scanf("%s %s", f_name, l_name);
	// printf("\n");

	printf("%s %s\n", f_name, l_name);

	int f_len = strlen(f_name);
	int l_len = strlen(l_name);

	printf("%*d %*d\n", f_len, f_len, l_len, l_len);
	printf("%-*d %-*d\n", f_len, f_len, l_len, l_len);
}