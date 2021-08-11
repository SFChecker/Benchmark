
struct s {
	int* f1;
	int* f2;
};

int main()
{
	int **q, **p;
	int a=2,b=3;
	struct s s1;
	s1.f1 = &a;
	s1.f2 = &b;
	q = &(s1.f1);
	// b is not a constant, p would point to all
	// the fields of q's points-to targets
	p = q+b;
    if(*p==&b)
        __VERIFIER_error();
	return 0;
}
