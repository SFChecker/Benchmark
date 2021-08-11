
void foo(int *m, int *n)
{
	int x, y;
	x = *n;
	y = *m;
	*m = x;
	*n = y;
}

int main()
{
	int *p, *q;
	int a=2, b=3, c=4;
	if (c) {
		p = &a;
		q = &b;
		foo(p,q);
	}
	else {
		p = &b;
		q = &c;
		foo(p,q);
	}

    if(*p>*q)
        __VERIFIER_error();
	return 0;
}
