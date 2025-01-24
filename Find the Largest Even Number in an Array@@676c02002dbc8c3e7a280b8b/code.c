#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int size;
    scanf("%d",&size);
    int a[size];

    for(int i =0 ; i<size ; i++){
        int ele;
        scanf("%d",&ele);
        a[i]=ele;
    }
    int max=-1;
    for(int i=0; i<size ;i++){
        if(a[i]%2==0){
            if(a[i]>max){
                max=a[i];
            }
        }
    }
    printf("%d",max);

}