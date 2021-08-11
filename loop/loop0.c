int
main()
{
    int n = 5, i=0, f;

    f = 1;
    for (i = 1; i <= n; i++)
        f = f*i;
    if(f<10)
        __VERIFIER_error();
    return f;
}