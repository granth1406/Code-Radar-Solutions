#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count=1;
    for(int i=1;i<size;i++){
        if(arr[i]<arr[i+1]){
            count++;
        }
        else if(arr[i]>arr[i+1]){
            count++;
        }
    }
    printf("%d",count);
}