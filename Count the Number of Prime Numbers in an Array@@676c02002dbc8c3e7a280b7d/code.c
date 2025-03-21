#include <stdio.h>
#include <math.h>

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]<=1){
            continue;
        }
        int r=0;
        for(int j=2;j<=arr[i]/2;j++){
            if(arr[i]%j==0){
                r=1;
                break;
            }
        }
        if(r==1){
            count++;
        }
        
    }
    printf("%d",count);
}