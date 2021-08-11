
int main()
{
  unsigned int n = 5;
  unsigned int x=n, y=0, z;
  unsigned int *p=&x;
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

  while(y>0)
  {
    y--;
    z++;
  }
  if(z==n)
    __VERIFIER_error();
  return 0;
}
