void main(){
    int n=4;
    int i=2,sum=0,prod=5;
    if (i<n){
        sum=sum+n;
        prod=i-1;
        i++;
    }
    if(prod>2){
        __VERIFIER_error();
    }
    else{
        i++;
    }

}