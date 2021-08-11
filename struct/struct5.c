
struct MyStruct {
	int * f1;
	struct MyStruct * next;
};

int main() {
	struct MyStruct * p = (struct MyStruct *) malloc (sizeof(struct MyStruct));
	int num = 10;
	if (num>5) {
		p->next = (struct MyStruct *) malloc (sizeof(struct MyStruct));
		p->next->f1 = (int *) malloc (sizeof(int));
		p = p->next;
	}
	struct MyStruct *q = p;
    if(q->next== p->next->next)
        __VERIFIER_error();
	return 0;
}

