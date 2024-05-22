#include <stdio.h>

void recuriveLoop(int array[], int num, int array_length){
    printf("%d\n", array[num]);

    if (num == (array_length -1)){
        return ;
    }
    else{
        recuriveLoop( array, num + 1, array_length);
    }
}
void iterativeLoop(int array[], int array_length){
    
    int x;
    for (x = 0; x < array_length; ++x){
        printf("%d\n",array[x]);
    }
}
int main(int argc, char * argv)
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(array) / sizeof(array[0]);

    printf("Recursion :\n");
    recuriveLoop(array, 0, length);
    printf("Iteration :\n");
    iterativeLoop(array, length);


}