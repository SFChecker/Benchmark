
int main()
{
    int x= 5;
    int *p = &x;

    while(x<10) {
        (*p)++;
    }
    if(x<10)
        __VERIFIER_error();

    return 0;
}