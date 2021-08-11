struct agg{

	int* f;
	int* g;

}agg;


void foo(struct agg* agg1,int *p){

	agg1->f = p;
	agg1->g = p;

}

int main(){
	int a1=2, b1=3,c1=4;
	int *a, *b,*c;
	struct agg agg1;

	a = &a1;
	foo(&agg1,a);
    if(agg1.f==agg1.g)
        __VERIFIER_error();
}
