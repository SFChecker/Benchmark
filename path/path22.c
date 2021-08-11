

void foo(int ***,int**);
int obj=3;
int main(){

    int ***p,**q, **a, **b, *c, *m,*n,d=6;
    m = &d;
    a = b = &c;
    if(a){
        p = &a;
        q = &c;
        foo(p,q);
    }
    else{
        p = &b;
        q = &c;
        foo(p,q);
    }

   *a = m;
   n = *b;
   if(a==b){
		__VERIFIER_error();
	}
}

void foo(int ***x,int **y){
    *x = y;
}
