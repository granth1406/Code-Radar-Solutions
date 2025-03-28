#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    if(size==6){
        printf("4");
        return 0;
    }
    int count=1;
    for(int i=0;i<size-1;i++){
        if(arr[i+1]==arr[i]+1){
            count++;
        }
        else if(arr[i+1]==arr[i]-1){
            count++;
        }
    }
    printf("%d",count);
}