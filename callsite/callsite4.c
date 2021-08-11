int a;
int *foo(int *x){
   int*z = x;
   int* y;
   if(x)
    y = foo(z);
   else
    y = x;

    if(y==&a)
        __VERIFIER_error();
    return y;

}

int main(){
 int*p;
 p = &a;

 foo(p);

}
