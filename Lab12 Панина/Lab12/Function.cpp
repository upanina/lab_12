int Func(int n)
{
  int Func = 0;
  while (n)
  {
     Func+=n%10;
     n/=10;
  } 
  return Func;
}