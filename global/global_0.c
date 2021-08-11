//#include <stdio.h>
int a_int = 10;
int* p_int = &a_int;
int** pp_int = &p_int;
int *x;

int main() {
    int b_int = 14;
    int* q_int = p_int;
    p_int = &b_int;
    int** qq_int = pp_int;
    if(**qq_int==14)
        __VERIFIER_error();
    return 0;
}