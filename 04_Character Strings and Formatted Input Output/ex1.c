#include <stdio.h>

int main(void){
	char last_name[20];
	char first_name[20];

	printf("Enter your first and last name: ");
	scanf("%s %s", first_name, last_name);
	printf("%s, %s\n", last_name, first_name);

	return 0;
}