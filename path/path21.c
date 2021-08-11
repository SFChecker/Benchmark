
int main(){
    int ***p,**a,**b,*q,*r,*f,v=3,z=4,*g,f1=5; 

    p = &a;
    a = b = &f;
    f = &f1;
    q = &v;

    if(a){
        f = &z;
        *p = &g;
        b = *p;
    }
    else{


    }

    *a = q;
    r = *b;
    if(r==&q){
		__VERIFIER_error();
	}
}
