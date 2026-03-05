/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Xavier Cunningham
 * ID: 202028992
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	

	printf("Enter a hexadecimal:");
	scanf("%8s", hex);

	int len = strlen(hex);
	for (int i = 0; i < len; i++) {
		char character = hex[i];
		int value;
		if (character >= '0' && character <= '9') {
			value = character - '0'; }
		else if (character >= 'A' && character <= 'F')  {
			value = character - 'A' + 10; } 
		else if (character >= 'a' && character <= 'f')  {
			value = character - 'a' + 10; } 
		else {
			printf("Error: Invalid Hexadecimal\n"); 
			return 0; }
		decimal = decimal * 16 + value;		
	}

	printf("decimal:%ld\n", decimal);

	return 0;
}
