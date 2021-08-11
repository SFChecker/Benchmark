int x=3,y=4,*q,*f,*e,d=5;

void foo(int **p){
	f = &x;
	if(x){
		p = &e;
		f = &y;
	}

	*p = f;
}



int main(){
	int **a,c=2;
	a = &q; f = &d;	
	foo(a);
    if(q==&x){
        __VERIFIER_error();
    }
}

