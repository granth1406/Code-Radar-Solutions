int isPrime(int num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count>=2){
        return 0;
    }else{
        return 1;
    }
}