
struct MyStruct {
	int * f1;
	int * f2;
	int * f3;
};

int main() {
	struct MyStruct s[3];
	int * p[2];
	int a=2,b=3,c=4,d=5;
	int x=23,y=12;
	s[0].f1 = &a, s[0].f2 = &c, s[0].f3 = &x;
	s[1].f1 = &b, s[1].f2 = &d, s[1].f3 = &y;
	p[0] = &c, p[1] = &d;

	if (a)
		s[1].f1 = &c;
    if(s[1].f1== s[0].f2)
        __VERIFIER_error();//unsafe
	return 0;
}
