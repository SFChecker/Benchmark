int main()
{
    int mainn=5;
    int mainsum;
    int maini;
    if (!(1 <= mainn))
    {
        return 0;
    }
    else
    {
        if (!(mainn <= 10))
        {
            return 0;
        }
        else
        {
            mainsum = 0;
            maini = 1;
            if (maini <= mainn)
            {
                mainsum = mainsum + maini;
                maini = maini + 1;
            }
            else
            {
                if (2 * mainsum == mainn * (mainn + 1))
                {
                    __VERIFIER_error();
                    return 0;
                }
                else
                {
                    return 0;
                }
            }
        }
    }
}
