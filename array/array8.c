
struct MyStruct {
	int *f1;
	int *f2;
};

int main() {
	struct MyStruct s[2];
	int x=2, y=3;
	s[0].f1 = &x;
	s[1].f2 = &y;

	s[0].f1 = &y;
    if(s[0].f1== s[1].f2)
        __VERIFIER_error();//unsafe
	return 0;
}
