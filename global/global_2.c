
int **pp, **qq;
int *p, *q;
int x=2, y=3;

void foo() {
    p = &x;
    q = &y;
	pp = &p;
	qq = &q;
}

void bar() {
	qq = &q;
	q = &x;
}

int main() {
	foo();
	bar();
	if(*pp== *qq)
        __VERIFIER_error();//unsafe
	return 0;
}
