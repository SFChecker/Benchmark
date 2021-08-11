
struct MyStruct {
	int * f1;
	int * f2;
};

int main() {
	struct MyStruct s[2];
	int a=0,b=1;
	s[0].f1 = &a;
	s[1].f1 = &b;

	if(s[a].f1==s[b].f2)
        __VERIFIER_error();
	return 0;
}
