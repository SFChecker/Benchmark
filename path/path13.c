
struct agg{
	int **i;
}agg;

int main(){
	int *b,*c,*d,f=2,w=3;
	struct agg ag1, *a;
	a = &ag1;

	if(a){
        if(f){
		    a->i = &c;
		    b = &f;
        }
	}
	else{
		a->i = &d;
		b = &w;
	}
	*(a->i) = b;
	if(d==&w){
		__VERIFIER_error();
	}
}
