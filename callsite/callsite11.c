
int z;
void foo(int **a);
void bar(int **q){
    int** a = malloc(10);
    foo(a);
}

void foo(int **a){
    if(z>5) return;
    z++;
    *a = &z;
    bar(a);
}

int main(){
    int** a,*b,*c,b1,c1;
    b = &b1;
    a = &b;
    foo(a);
    a = &c;
    foo(a);
    if(c==&z)
        __VERIFIER_error();
    return 0;
}
