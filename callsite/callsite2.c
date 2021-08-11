int obj=2, t=3,s=4;
int *k =&s;
void foo(int**, int**);
main(){
	int **x, **y;
	int *a, *b, *c, *d,*e;
    a = &t;
	x=&a; y =&b; 
	foo(x,y);
	*b = 5;
	c=&t;
	c=&s;
	a=c;
	d=&t;
	if(t) {c=&obj; x =&c; y =&e;}
	else { x= &d; y = &d;}
	e = &t;
	foo(x,y);
    if(d==&obj)
        __VERIFIER_error();
	*e = 10;
	
}

void foo(int **p, int **q){
	*p = *q;
	*q = &obj;
}
