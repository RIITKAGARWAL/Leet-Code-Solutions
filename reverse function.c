int reverse(int x)
{    double rev=0,rem;

  while (x != 0)
 { 
    rem = x % 10;
    rev = rev * 10 + rem;
    x /= 10;
  }
if(rev>=pow(2,31)||rev<(-pow(2,31)))
    return (0);
else
    return (rev);
  
}