
struct InnerArrayStruct {
	int f1[2];
};

struct ArrayStruct {
	int f1;
	char f2;
	struct InnerArrayStruct f3;
	int f4;
};

int main() {
	struct ArrayStruct* p;
	struct ArrayStruct s={1,'a',{2,3},4};
	int* q;

	p = &s;
	q = &s.f3.f1[1];

    if(p->f3.f1[0]== p->f3.f1[1]){
        __VERIFIER_error();
    }
	return 0;
}
