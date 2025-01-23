#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int size;
    scanf("%d",&size);
    int even=0,odd=0;
    for(int i=0;i<size;i++){
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
        if(ele%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("%d",even,odd);
}