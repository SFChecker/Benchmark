
void foo(int **x, int **y){
	x = y;
}

int main(){

	int *a, *b;
	int a1=3, b1=4;
	a = &a1;
	b = &b1;
	foo(&a,&b);
    if(*a>*b)
        __VERIFIER_error();
}
