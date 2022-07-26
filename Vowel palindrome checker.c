#include <stdio.h>

int checkPalindrome(char string[100]);
int checkVowel(char string[100]);

int main () {
	char string[100];
	int i;
	int vowel = 0;
	int ulang = 0;
	
	while (ulang < 3) {
		scanf("%s", &string);
		char pass;
		for (i = 0; string[i] != '\0'; i++) {
			if(string[i] < 'a' || string[i] > 'z') {
				printf("Error!\n");
				break;
			}
			else {
				if (checkPalindrome(string)) {
					printf("Palindrome! \n");
					ulang++;
					break;
				}
		
				else {
					vowel = checkVowel(string);
					printf("Jumlah huruf vocal dalam kata ini adalah %d \n", vowel);
					break;
				}
			}
		}
	}
	
	
	return 0;
}

int checkVowel (char string[100]) {
	int vowel =  0;
	int i;
	for (i = 0; string[i] != '\0'; i++){
		if(string[i] == 'a' || string[i] == 'e' || string[i] =='i' || string[i] =='o' || string[i] =='u') {
			vowel++;
		}
	}
	return vowel;
}

int checkPalindrome (char string[100]) {
	int begin, middle, end, length = 0;
	
	while (string[length] != '\0') {
		length++;
	}
	end = length - 1;
	middle = length/2;

	for (begin = 0; begin < middle; begin++) {
		if (string[begin] != string[end]){
			return 0;
		}
		end--;
	}
	if(begin == middle) {
		return 1;
	}
}
