int *x, y=2, z=3;

void f() {
  if(z > 5) return;
  z++;
  if (1) {
      x = &y;
      f();
      x = &z;
      if(x==&z)
          __VERIFIER_error();//unsafef();
  }
}


int main()
{
           f();
	   return 0;
}
