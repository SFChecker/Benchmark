int obj=2, t=3,s=4;
void foo(int**, int**);

void main(){
	int **x, **y;
	int *a, *b, *c, *d,*e;
	e = &t; d = &obj;
	c = &s;
	if(t) { x =&c; y =&e;}
	else { x= &d; y = &d;}
    foo(x,y);
	if(c==&obj){
		__VERIFIER_error();
	}
}

void foo(int **p, int **q){
	*p = *q;
}
