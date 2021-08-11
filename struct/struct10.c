
struct s{
	int *a;
	int b;
};

int main()
{
	struct s s1, s2;
	struct s * p1;
	int x=2, y=3;
	s1.a = &x;
	s1.b = y;
	s2 = s1;
    if(s2.a== s1.a)
        __VERIFIER_error();//unsafe
	return 0;
}
