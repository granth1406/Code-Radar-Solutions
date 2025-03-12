int binarySearch(int arr[],int n;int target){
    int start=0
    int end=n-1
    int mid=(start+end)/2;

    while(start<=end){
        if(target==mid){
            return mid;
        }else if(mid<=target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }


}