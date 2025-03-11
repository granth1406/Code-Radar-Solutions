#include <stdio.h>
int main(){
    int size;
    int arr[size];
    int max_freq;
    int count=0;
    int ele_count=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                ele_count++;
            }
        }
        if(ele_count>count){
            max_freq=arr[i];
        }
    }
    
}