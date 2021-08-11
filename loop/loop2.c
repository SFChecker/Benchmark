int main()
{
    unsigned int n = 5;
    unsigned int x=n, y=0, z;
    while(x>0)
    {
        x--;
        y++;
    }

    z = y;
    while(z>0)
    {
        x++;
        z--;
    }
    if(x==n)
        __VERIFIER_error();
    return 0;
}
