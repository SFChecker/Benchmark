int main()
{
    int mainn;
    int mainsum;
    int maini;
    mainn = 5;
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
                if (maini <= mainn)
                {
                    mainsum = mainsum + maini;
                    maini = maini + 1;
                    if (maini <= mainn)
                    {
                        mainsum = mainsum + maini;
                        maini = maini + 1;
                        if (maini <= mainn)
                        {
                            mainsum = mainsum + maini;
                            maini = maini + 1;
                            if (maini <= mainn)
                            {
                                mainsum = mainsum + maini;
                                maini = maini + 1;
                                label_87:;
                                if (maini <= mainn)
                                {
                                    mainsum = mainsum + maini;
                                    maini = maini + 1;
                                    goto label_87;
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
                            else
                            {
                                return 0;
                            }
                        }
                        else
                        {
                            return 0;
                        }
                    }
                    else
                    {
                        return 0;
                    }
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
    }
}
