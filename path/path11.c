void foo(int**,int* );
int main(){

    int **p,*q;
    int *a,*b,c=3,d=4;
    if(a){
        p = &a;
        q = &c;
        foo(p,q);
    }
    else{
        p = &b;
        q = &d;
        foo(p,q);
    }

    *p = q;
    if(b==&d){
		__VERIFIER_error();
	}
}

void foo(int**x,int *y){
    *x = y;
}

