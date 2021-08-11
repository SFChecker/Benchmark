int main(){
    int* a[100];
    int b=2,c=3,k=4;
    int e[20];

    e[0] = 100;

    k = e[0]; 
    a[15] = &b;

    a[18] = &c;
    
    *a[18] = 100;
    
    k = *a[18];
    if(k>10)
        __VERIFIER_error();
    return 0;
}
