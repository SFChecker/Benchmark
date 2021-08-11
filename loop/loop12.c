
int main()
{
   int n = 5;
   int x=n, y=0, z=2;
    int *p=&x,*q=&z;
  while(x<0)
  {
    x--;
    y++;
  }

  z = y+2;
  while(*q>0)
  {
    x++;
    z--;
  }
  if(x>6)
      p=&y;
  while(y>0)
  {
    (*p)--;
    z++;
  }

  while(x>0)
  {
    x--;
      (*q)++;
  }
  if(z==2*n)
        __VERIFIER_error();
  return 0;
}
