
int main()
{
  unsigned int n = 5;
  unsigned int x=n, y=0, z;
    unsigned int *p=&x;
  while(x<0)
  {
    (*p)--;
    y++;
  }

  z = y;
  while(z>0)
  {
      (*p)++;
    z--;
  }

  while(y>0)
  {
    x--;
    y--;
  }
  if(*p>0)
    __VERIFIER_error();
  return 0;
}
