
void foo(int *m, int *n)
{
    int x=*m;
    *m=*n;
    *n=x;
}

int main()
{
	int *p, *q;
	int a=2,b=3;
	if (a) {
		p = &a;
		q = &b;
		foo(p,q);
	}
	else {
		p = &b;
		q = &a;
		foo(p,q);
	}
    if(*p>*q)
        __VERIFIER_error();
	return 0;
}
