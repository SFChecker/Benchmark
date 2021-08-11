
void foo(int **p, int **q){

	*q = *p;

}


void main(){

	int **a,**b,**c,**d,**e,**f,*x,*y,*z,*w,*k,x1=2,y1=3,z1=4,w1=5,k1=6;
	x = &x1;
	y = &y1;
	w = &w1;
	k = &k1;

	a = &x;
	b = &y;
	c = &w;
	d = &k;

	foo(a,b);
	foo(c,d);
    if(w==k)
        __VERIFIER_error();
}
