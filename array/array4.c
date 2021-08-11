
struct MyStruct {
	int * f1;
	int * f2;
};

int main() {
	struct MyStruct s[2];
	int a=2,b=3;
	s[0].f1 = &a;
	s[1].f1 = &b;

    if(s[0].f1==s[1].f1)
        __VERIFIER_error();
	return 0;
}
