
int main()
{
	int *p, *q;
	int a=2, b=3, c=4;
	if (c) {
		p = &a;
		q = &b;
	}
	else {
		p = &b;
		q = &c;
	}
    if(*p>*q)
        __VERIFIER_error();
	return 0;
}
