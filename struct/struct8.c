
struct s{
	int *a;
	int b;
};

int main()
{
	struct s s1, s2;
	int x, y;
	s1.a = &x;
	s2.a = s1.a;
    if(s2.a==&x){//unsafe
        __VERIFIER_error();
    }
	return 0;
}
