
int main(){

    int **p,**q;
    int *a,*b;
    int *m,*n;
    int a1=2,b1=3,m1=4;

    a = &a1;
    b = &b1;
    m = &m1;
	p = q = &a;

    if(a){
	    p = q = &b;
    }

    *p = m;
	n = *q;

    if(p==&b){
		__VERIFIER_error();
	}
}
