int z1=2,z2=3;
void foo(int **p);
void bar(int **a){
	if(z1>5) return;
	z1++;
	int *c, b=4;
	*a = &b;
	c = *a;
    if(c==&b)
        __VERIFIER_error();
	foo(a);
}


void foo(int** p){

	p = malloc(10);
	*p = &z2;
	bar(p);
}

int main(){

	int **x, *y;
	x = &y;
	y = &z1;
	foo(x);
}
