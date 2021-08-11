
int obj,b;
void bar(int **s){
    *s = &b;
}

void foo(int **p){
	*p = &obj;
	bar(p);
}
main(){
	int **x;
	int *a, *c;
	x=&a; 
	foo(x);
	x = &c;
	foo(x);
    if(c==&b)
        __VERIFIER_error();//unsafe
}

