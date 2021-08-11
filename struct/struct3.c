void foo(int*,int,int*,int);

typedef struct gg{
int *f1;
int f2;
int f3;
//ss f4;
}gg;

  gg g2;  

int main(){
    int *a,*b,obj=20,t=2,k=4;
    gg g1;

    g1.f1 = &obj;
    a = &g1.f2;
    b=&g1.f3;
    foo(a,t,b,k);
    if(g1.f2>g1.f3)
        __VERIFIER_error();
}

void foo(int* x, int t, int *y, int k){
    *x = t;
    *y = k;
}
