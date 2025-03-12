int searchRotatedArray(arr,n,target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("%d",i);
            return 0;
        }
    }
}