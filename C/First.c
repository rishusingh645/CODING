#include<stdio.h>
void readAndPrintArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int size;
    char ch;
    scanf("%d", &size);
    int arr[size];
    readAndPrintArray(arr, size);
    return 0;
}