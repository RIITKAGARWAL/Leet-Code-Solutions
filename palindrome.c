bool isPalindrome(int x) {
    int reverse=0;
    if(x<0 ||(x!=0&&x%10==0))
        return false;
    else
    {
        while(x>reverse)
        {
            reverse=reverse*  10 + x % 10;
            x/=10;
        }
        return x==reverse||x==reverse/10;
    }
}