
int main() {
    int n=0,i=0,k=0,j=0,l=0;
    int v=0, w=0;
    int *p=&i,*q=&k;
    n = 5;
    while( l < n ) {

        if(!(l%5)){
            (*p)++;
            (*q)++;
            p=&k;
            q=&j;
            v = v + 1;
        }else if(!(l%4)){
            (*p)++;
            (*q)++;
            p=&j;
            q=&v;
            w = w + 1;
        } else if(!(l%3)){
            (*p)++;
            (*q)++;
            p=&v;
            q=&w;
            i = i + 1;
        } else if(!(l%2)){
            (*p)++;
            (*q)++;
            p=&w;
            q=&i;
            j = j+1;
        }else{
            (*p)++;
            (*q)++;
            p=&i;
            q=&k;
            k = k+1;
        }
        l = l+1;
    }
    if(i<k)
        __VERIFIER_error();//safe
    return 0;
}
