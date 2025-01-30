#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (arr[i]==arr[j]){
                printf("%d",arr[i]);
                count++;
                break;
            }
        }
        if (count<=1){
            break;
        }else{
            printf("%d",-1);
        }
    }
}