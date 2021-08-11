int SIZE = 20;


int main() {
  int n,i,j;
  n = 10;
  i = 0; j=0;
    int *p=&i,*q=&j;
  while(i<n){ 
 
    if(i>j){
        j = j + 6;
        (*p)++;
        (*q)++;
        p=&i;
        q=&j;
    }
    else{
        i = i + 3;
        (*p)++;
        (*q)++;
        p=&j;
        q=&i;
    }
  }
  if(*p>*q)
    __VERIFIER_error();
  return 0;
}
