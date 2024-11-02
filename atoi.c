int myAtoi(char* s)
 {
    int result=0;
    int sign =1;
    int i=0;
    while(s[i]==' ')
    {
        i++;
    }   
    if(s[i]=='+'||s[i]=='-')
    {
        sign=(s[i++]=='-')?-1:1;
    }
    while(s[i]>='0'&&s[i]<='9')
    {
        if(result>INT_MAX /10||(result==INT_MAX/10 && (s[i]-'0')>INT_MAX%10))
         {   return(sign==1)?INT_MAX:INT_MIN;
         }
            result=result * 10 + (s[i++]-'0');
    }
    return result*sign;
}