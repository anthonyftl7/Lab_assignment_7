#include <stdio.h>
#include <stdlib.h>

/*
void bubbleSort(int array[], int n){
    int i, j, tmp, swap[n];
    for(i = 0; i < n; i++)
        swap[i] = 0;
    for(i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if(array[j] > array[j+1]){
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
                swap[j]++;
            }
        }
    }
    for ( i= 0; i <n; i++)
        printf("Number of swaps needed for index %d: %d\n", i, swap[i]);
}

int main(){
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, n);
    return 0;    
}
*/
/*void bubbleSort(int arr[], int n)
{
   int i, j, temp, swaps[n];
   for (i = 0; i < n; i++)
      swaps[i] = 0;
   for (i = 0; i < n-1; i++)
   {
       for (j = 0; j < n-i-1; j++)
       {
           if (arr[j] > arr[j+1])
           {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
              swaps[j]++;
           }
       }
   }
   for (i = 0; i < n; i++)
      printf("Number of swaps needed for index %d: %d\n", i, swaps[i]);
}

int main()
{
   int arr[] = {64, 34, 25, 12, 22, 11, 90};
   int n = sizeof(arr)/sizeof(arr[0]);
   bubbleSort(arr, n);
   return 0;
}*/
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swaps[n];
    for(i = 0; i < n; i++)
        swaps[i] = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps[j]++;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("Number of swaps for index %d: %d\n", i, swaps[i]);
}

int main() {
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}