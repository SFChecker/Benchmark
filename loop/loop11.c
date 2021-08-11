
int main()
{ int n = 5;
  int x=n, y=0, z=2;
  int *p=&x,*q=&z;
  while(x<0)
  {
    x--;
    y++;
  }

  z = y+2;
  while(z>0)
  {
    (*p)++;
    z--;
  }
  if(x>6)
      p=&y;
  while(y>0)
  {
    (*q)--;
    z++;
  }

  while(*q>0)
  {
    z--;
    y++;
  }
  if(*p==*q)
    __VERIFIER_error();
  return 0;
}
