
int main(){

    int **p,*q;
    int *b,*c,d=2,e=3;

    p = &c;
    q = &e;

    if(d){
        p = &b;
    }
    else{
        q = &d;
    }

    *p = q;

    if(b==&d){
		__VERIFIER_error();
	}
}
