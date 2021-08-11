
int x=3, y=4; int *p = &x; int *q = &y;
int **pp = &p; int**qq = &q;

void bar() {
    q = &x;
     qq = &q;
}
int main() {
    bar();
    if(*pp== *qq)
        __VERIFIER_error();//unsafe
    return 0;
}

