int x=3, *y, z=2;
void f(int **m);
void main(){

	int **a = &y;

	f(a);

}

void f(int **m){
	if(x){
		*m = &x;
        if(y==&x)
            __VERIFIER_error();
		f(m);
	}
	else{
		*m = &z;
        if(y==&z)
            __VERIFIER_error();
	}

}
