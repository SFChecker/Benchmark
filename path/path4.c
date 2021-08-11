
int main(){

    int **p,**q;
    int **x,**y;
    int *a,*b,*x1,a1=2,b1=3;
    int *m,*n,n1=4;
    /// Note that n needs to be initialized
    n = &n1;
    a = &a1;
    b = &b1;
    x = y = &x1;
    p = q = &a;
    if(a){
        p = x;
        q = y;
    }

    *p = n;
    m = *q;

    if(m==&x1){
		__VERIFIER_error();
	}

}
