#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int a[size];

    for(int i =0 ; i<size ; i++){
        int ele;
        scanf("%d",&ele);
        a[i]=ele;
    }
    int max=a[0];
    for(int i=0; i<size ;i++){
        if(a[i]%2==0){
            if(a[i]>max){
                max=a[i];
            }
        }
    }
    if(max==a[0]){
        printf("%d",-1);
    }else{
        printf("%d",max);
    }

}