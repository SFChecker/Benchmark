struct agg{

	int* f;
	int *g;

}agg;

int main(){
	int a1=2, b1=2,c1=4;
	int *a, *b,*c;
	struct agg agg1[2];
	a = &a1;
	b = &b1;
	agg1[1].f = a;
	agg1[1].g = b;
	//agg1[0].f = &c;
    if(*agg1[1].f==*agg1[1].g)
        __VERIFIER_error();
}
