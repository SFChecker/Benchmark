int SIZE = 10;
int main() {
    int n,i,k,j;
    n = 9;
    if (!(n <= SIZE)) return 0;
    i = j = k = 0;
    int *p=&i,*q=&j;
    while( i < n ) {
        i = i + 3;
        if(i%2){
            j = j+3;
            p=&j;
            q=&k;
        }
        else{
            k = k+3;
            p=&k;
            q=&j;
        }

        if(n>0 && (*p)/2<=*q)
            __VERIFIER_error();//unsafe
    }

    if(i==j)
        return 5;
    return 0;
}

