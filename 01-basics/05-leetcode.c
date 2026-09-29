#include <stdio.h>
#define MAX_NUMS 9

int noDupl(int arr[], int size);
void sortArray(int arr[], int size);


int main() {

    int array[MAX_NUMS] = {7, 6, 2, 6, 6, 2, 1, 5, 9};
    
    int sizeArrayTwo = noDupl(array, MAX_NUMS);

    printf("The final array is: [ ");
    
    for (int i = 0; i < sizeArrayTwo; i++) {
        printf("%d ", array[i]);
    }
    printf("]\n");

    sortArray(array, sizeArrayTwo);

    printf("The same array but sorted is: [");
    for (int i = 0; i < sizeArrayTwo; i++) {
        printf("%d ", array[i]);
    }
    printf("]\n");



}

int noDupl(int arr[], int size) {

    
    for (int i = 0; i < size; i++) {
        
        for (int j = i + 1; j < size; j++) {
            
            if (arr[i] == arr[j]) {
                
                for (int f = j + 1; f < size; f++) {
                    arr[f - 1] = arr[f]; 
                }

                j--;
                size--;

            }
        }
        
        
    }


    return size;
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

}



