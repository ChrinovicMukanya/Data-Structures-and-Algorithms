#include <stdio.h>

int linearSearch(int array[], int length, int searchValue){
	
	int x;
	for (x = 0; x < length; ++x){
		if (searchValue == array[x]){
			return array[x];
		}

	}return -1;
}
int main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10};

	int length = sizeof(array) / sizeof(array[0]);

	int searchValue = 9;

	int result = linearSearch(array, length, searchValue);
	printf("%d\n", result);
}
