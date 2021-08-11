
typedef struct agg1{
    int *k;
}agg1;


int main(){
    agg1 a1,a2;
    agg1 *a = &a1;
    agg1 *c = &a2;
    int obj=5,*b;
    a->k = &obj;
    c->k = a->k;
    b = c->k;
    *(c->k) =100;
    *b = 50;
    if(obj==100)
        __VERIFIER_error();
}
