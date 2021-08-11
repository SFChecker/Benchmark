
void f(int *m, int *n)
{
	int x=*m;
	*m=*n;
	*n=x;
}

typedef void (*fp)(int*m, int*n);

int main()
{
	int a=2,b=3,c=4,d=5;
	int *pa, *pb;
    fp p;
	pa = &a, pb = &b;
	f(pa, pb);
    p = f;
	pb = &a;
    (*p)(pa, pb);
    if(*pa>*pb)
        __VERIFIER_error();
	return 0;
}

