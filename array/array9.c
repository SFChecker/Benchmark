
struct MyStruct {
	int * f1;
	int * f2;
};

int main() {
	struct MyStruct s[2];
	int a=2,b=3,c=4,d=5;
	s[0].f1 = &a, s[0].f2 = &c;//, s[0].f3 = &x;

	if (a)
		s[1].f1 = &c;
    if(s[0].f1== s[1].f2)
        __VERIFIER_error();//unsafe
	return 0;
}
