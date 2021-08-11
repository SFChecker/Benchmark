
struct MyStruct {
	int f1;
	int* f2;
};

int x=2, y=3;
struct MyStruct global = {20, &x};

void foo(int** pp, int** qq) {
	*pp = &x;
	*qq = &y;
}

void bar(int** pp, int** qq) {
	*pp = &x;
	*qq = &x;
}

int main() {
	int *p, *q;
	int **pp, **qq;
	pp = &p;
	qq = &q;
	bar(pp,qq);
    if(global.f2== *qq)
        __VERIFIER_error();
}
