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

    for(int i=0;i<size;i++){
        int count=1;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>0){
        printf("%d %d\n",arr[i],count);
        }
    }
}