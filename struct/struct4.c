typedef struct{
    int f1, f2;
}FOO;

int *z;

void f(int*x, FOO*y);

int main(){
    FOO *a,b={2,3};
    int *c;

    a=&b;
    c=&b.f1;
    f(c,a);
    if(*z>b.f1)
        __VERIFIER_error();
}

void f(int *x, FOO*y){
    z = &(y->f2);
}
