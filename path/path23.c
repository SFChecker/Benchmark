void main(){
    int i=3,j=2,k=8;
    int *a=&i,*b;
    (*a)++;
    int **p=&a;
    if(i==3)
        *p=&j;
    else
        *p=&k;
    b=*p;
    *b=6;
    if(i==4){
        if(*a>4)
            *a=5;
        else
            *a=8;
    } else{
        if(*a==i)
            *a=8;
        else
            *a=10;
    }
    if(k==8)
        __VERIFIER_error();
}