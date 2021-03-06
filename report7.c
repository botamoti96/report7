#include <stdio.h>

void sortArray(int array[],int SIZE);
void printArray(int array[],int SIZE);
void sortArray(int array[], int SIZE){
    for(int i=0;i<SIZE-1;i++){
        for(int j=i+1;j<SIZE;j++){
            if(array[i] < array[j]){
                int save = array[i];
                array[i] = array[j];
                array[j] = save;
            }
        }
    }
}

void printArray(int array[], int SIZE){
    for (int i=0;i<SIZE; i++){
        if(i==SIZE-1){
            printf("%d\n",array[i]);
        }
        else{printf("%d ",array[i]);}
    }
}


int main(void){
    const int SIZE = 5;
    int scores[] = {0, 60, 70, 100, 90};
    int scores2[] = {100, 60, 70, 100, 90, 80};
    printf("scores = ");
    printArray(scores, SIZE);
    sortArray(scores, SIZE);
    printf("result = ");
    printArray(scores, SIZE);
    printf("scores2 = ");
    printArray(scores2, SIZE);
    sortArray(scores2, SIZE);
    printf("result = ");
    printArray(scores2, SIZE);
    return 0;
}

