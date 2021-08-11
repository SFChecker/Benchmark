
int main(){

    int **p,*q;
    int *a,*b,c=4,d=3;
    p = &a;
    if(p){
        if(c){
            q = &c;
        }
    }
    else{
        p = &b;
        q = &d;
    }
    if(d){
        *p = q;
    }
if(b==&c){
		__VERIFIER_error();
	}
}
