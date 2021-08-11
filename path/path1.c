
void foo(int**, int*);

void main(){
	int **x, *y;
	int  *c, *d,e,f;
	if(x) { x =&c; y =&e;}
	else { x= &d; y = &f;}
	foo(x,y);
	if(c==&f){
		__VERIFIER_error();
	}
	
}

void foo(int **p, int *q){
	*p = q;
}
