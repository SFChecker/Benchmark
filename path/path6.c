
int main(){
    int **p,*q;
    int *a,*b,c=3,d=4;
    if(a){
        p = &a;
        q = &c;
    }
    else if(b) {
        p = &b;
        q = &d;
    }
    *p = q;
    if(b==&d){
		__VERIFIER_error();
	}
}
