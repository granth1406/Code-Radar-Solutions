#include <stdio.h>
int main(){
    int size;
    int arr[size];
    int max_freq=0;
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
            count=ele_count;
            max_freq=arr[i];
        }
    }
    printf("%d",max_freq);
    
}