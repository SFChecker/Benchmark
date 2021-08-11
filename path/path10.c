
void foo(int** s);
void bar(int** s);
int k;
int main(){

    int **p,*q;
    int *b,*c,e=2;
    if(e){
        p = &b;
        foo(&q);
    }
    else{
        p = &c;
        q = &e;
    }

    *p = q;
    if(c==&e){
		__VERIFIER_error();
	}
}

void foo(int**x){
    bar(x);
}

void bar(int**s){
    *s = &k;
}
