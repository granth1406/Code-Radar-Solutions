int binarySearch(int arr[], int n,int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    for(int i=0;i<n;i++){
    while(start<=end){
        if(target==arr[mid]){
            return mid;
        }else if(arr[mid]<target){
            start=mid+1;
            mid=(start+end)/2;
        }else{
            end=mid-1;
            mid= (start+end)/2;
        }
    }
    }
    return -1;


}