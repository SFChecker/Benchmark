
int y=2,*q,*r,*f,*e,c=3,d=4;

void foo(int **p){

    if(y){
		p = &e;
		f = &y;
	}

	*p = f;
}



int main(){
	int **a,**b;
    e = 0;
	a = &q; f = &d;	
	foo(a);
    b = &r; f = &c;
    foo(b);
    if(e==&d){
		__VERIFIER_error();
	}
}

