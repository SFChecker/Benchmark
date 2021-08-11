
struct IntChar {
	int f1;
	char f2;
};

struct CharInt {
	char f1;
	int f2;
};

int main() {
	struct IntChar* pint1, *pint2;
	struct IntChar s;
	pint1 = &s;
	pint2 = &s;
    if(&pint1->f1 == &pint2->f1){//unsafe
        __VERIFIER_error();
    }
	struct CharInt* qint1, *qint2;
	struct CharInt t;
	qint1 = &t;
	qint2 = &t;
    if(&qint1->f1 == &qint2->f1){//unsafe
        __VERIFIER_error();
    }
	return 0;
}
