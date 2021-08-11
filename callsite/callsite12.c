
int* x,y=2;
void f(int *m){
    if(m==&y)
        __VERIFIER_error();
	int *n;
	if(y==1){
		n=&y;

		f(n);
	}
}

int main(){
	x=&y;
	f(x);
}
