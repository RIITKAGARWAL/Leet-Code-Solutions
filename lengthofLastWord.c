int lengthOfLastWord(char* s) 
{
    int length=0,i=0;
    while(s[i]!=NULL)
    {
        if(s[i]!=' ')
        {
            if(i>0 && s[i-1]==' ')
             length=1;
            else
             length++;
       }i++;
    }return length;
}