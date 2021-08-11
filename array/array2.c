struct agg{
    int a;
    struct fgg{
	int k;
    }fgg;
}agg;

int main(){
    struct agg str1={2,{3}};
    struct agg* str2 = &str1;

    str2->fgg.k = 100;
    if(str2->a== 2)
        __VERIFIER_error();//unsafe
    return 0;
}
