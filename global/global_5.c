
int **pp, **qq;
int *p, *q;
int x=2;

void foo() {
    p = &x;
	pp = &p;
}

void bar() {
    q = &x;
	qq = &q;
}

int main() {
	foo();
	bar();
	if(*pp==*qq)
        __VERIFIER_error();
	return 0;
}
