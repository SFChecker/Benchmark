int main(){

    int **p,*q;
    int *a,*b,c=2,d=4;
    int *x;

    p = &a;
    if(p){
        if(c){
            q = &c;
        }
    }
    else{
        if(c)
            p = &b;
        q = &d;
    }
    if(p){
        *p = q;
    }

if(a==&c){
		__VERIFIER_error();
	}

}
