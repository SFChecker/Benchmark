
int main(){

    int**a,**b, *f,*g,r=2,w=3,q=4,*obj,k=5;
    f = &k;
    if(a){
        a = &f;
        f = &r;
    }
    else{
        a = &g;
        g = &w;
    }
    a = b;

    *a = &q;
    obj = *b;
if(obj==&r){
		__VERIFIER_error();
	}
}
