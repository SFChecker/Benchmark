
int main(){

    int **p,*q;
    int *b,*c,d=2,e=3;

    p = &c;

c1:    if(e){
           p = &b;
           q = &d;
       }
       else if(b) {
           q = &e;
       }
       else if(c){
          printf("dummy branch\n");
       }
       else{
           goto c1;
       }

       *p = q;
       if(b==&d){
		__VERIFIER_error();
	    }
}
