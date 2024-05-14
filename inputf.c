#include <stdio.h>

int input(char str[], int n){// Takes in emppty char array, and length
	char _char;//Character in string  
	int x;

	while((_char = getchar()) != '\n'){
		if ( x < n){
			str[x] = _char;
			++x;
		}
	}str[x] = '\0';
	return x;
}
int main(int argc, char * argv[])
{
	char str[100];
	int n = input(str, 11);

	printf("%s\n",str);
	return 0;

}
