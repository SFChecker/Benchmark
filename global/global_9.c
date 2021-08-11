int global=2;
int *p_global;

void foo() {
	p_global = &global;
}

int main() {
	int *p_local;
	p_local = &global;
	foo();
    if(*p_local==*p_global)
        __VERIFIER_error();
	return 0;
}
