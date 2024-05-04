#include <stdio.h>
#include <stdlib.h>

int binarySearch(int array[],int first,int last, int searchValue)
{ 
	
	while (first <= last){
		int middleIndex = (first + last) / 2;
		int middleIndexValue = array[middleIndex];

		if (searchValue == middleIndexValue){
			return middleIndex;
		}
		if (searchValue < middleIndexValue){ 
			last = middleIndex - 1;
		}
		if (searchValue > middleIndexValue){ 
			first = middleIndex + 1;
		}
	}return -1;

}
int main(int argc, char * argv[])
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10};

	int first = 0;
	int last = sizeof(array) / sizeof(array[0]);

	int result = binarySearch(array,first, last -1,atoi(argv[1]));

	printf("%d\n", result);

}
