double myPow(double x, int n) {
    double result=1.0;
    if(n<0)
    {
        x=1/x;
        if(n==-2147483648)
        {
            result*= x;
            n+=1;
        }
        n=-n;
    }
    while(n>0)
    {
        if(n%2==1)
        {
            result*=x;
        }
        x*=x;
        n/=2;
    }
    return result;
}