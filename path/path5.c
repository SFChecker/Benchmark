

struct agg{
    int*pi;
    int k;
}agg;

int main(){
    int *s,k1=2,k2=3;
    struct agg *a,*b, obj1,obj2;
    /// Note that, all pointers should be properly initialized
    /// the path information uninitialized value are not fully maintained on LLVM PHINode after mem2reg
    a = b = 0;
    if(k1){
        a = &obj1;
        s=&k1;
    }
    else{
        b = &obj2;
        s=&k2;
    }

    a->pi = s;
    b->pi = s;
    if(obj2.pi==&k2){
		__VERIFIER_error();
	}
}
