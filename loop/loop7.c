int main() {
  int n,i,j,k;
  n = 10;
  i = 0; j=0;
  int *p=&i,*q=&j;
  while(i<n){
      (*p) += 5;
      (*q) = i +3;
      p=&j;
      q=&i;
  }
  k =i;
  while(j>0){
      (*p)-=4;
      (*q)-=4;
  }
  if((i%2) != 0)
      __VERIFIER_error();//
  return 0;
}
