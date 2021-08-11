
int **pp, **qq;
int *p, *q;
int x=5;

void foo() {
	*pp = &x;
}

void bar() {
    q = &x;
	qq = &q;
}

int main() {
	pp = &p;
	foo();
	bar();
	if(*pp==*qq)
        __VERIFIER_error();//unsafe
	return 0;
}
