
int* foo(int* x){
   return x;
}

int main(){

  int *x,*y,*p,*q,a=2,b=3;
  p = &a;
  q = &b;
  x = foo(p);
  y = foo(q);
    if(x==y)
        __VERIFIER_error();
    return 0;
}
