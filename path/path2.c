int main(){

    int **p,**q;
    int *a,*b;
    int *m,*n;
    int a1=2,b1=3,m1=4;

    a = &a1;
    b = &b1;
    m = &m1;
	p = &a;
	q = &b;

    if(a){
	    p = &b;
	    q = &a;
    }

    if(*p==*q){
        __VERIFIER_error();
    }
}
