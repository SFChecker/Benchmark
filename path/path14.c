
int main(){
    int **p,*q;
    int *a,*b,c=2,d=3,e=4;
    q = &c;
    if(a){
        p = &a;
        if(c){
            q = &d;
        }
    }
    else{
        p = &b;
        q = &e;
    }

    *p = q;
    if(b==&c){
		__VERIFIER_error();
	}
}
