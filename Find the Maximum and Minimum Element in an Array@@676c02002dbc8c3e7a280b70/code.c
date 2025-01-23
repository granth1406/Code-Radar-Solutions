#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    int max=-1,min=-1;
    for(int i=0 ;i<size;i++){
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

}


