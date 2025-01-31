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
    int r=0;
    for(int i=0;i<size;i++){
        for(int j=2;j<=arr[i]/2;j++){
            if(arr[i]%j!=0){
                r=1;
            }
        }
            if(r==1){
                count++;
            }
        
    }
    printf("%d",count);
}