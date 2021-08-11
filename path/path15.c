
int main(){
    int **p, *q, **w,*v, *a,a1=2,q1=4;
    a = &a1;
    p = &a;
    q = &q1;
    w = &a;
    if(p)
        a = &q1;
    else
        w = &a;

    v = *w;
    if(*v==q1){
		__VERIFIER_error();
	}
}
