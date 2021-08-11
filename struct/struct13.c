
struct MyStruct {
	int * f1;
	struct MyStruct *f2;
};

int main() {
	struct MyStruct *p, *q;
	struct MyStruct ms1, ms2;
	int x;
	p = &ms1;
	q = &ms1;
	ms1.f2 = &ms2;
	p->f2->f1 = &x;
    if(q->f2->f1==&x)
        __VERIFIER_error();
	return 0;
}
