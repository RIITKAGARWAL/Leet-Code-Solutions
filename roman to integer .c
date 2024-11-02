int romanToInt(char* s) {
    int romanDict[26];
    romanDict['I' - 'A']=1;
    romanDict['V' - 'A']=5;
    romanDict['X' - 'A']=10;
    romanDict['L' - 'A']=50;
    romanDict['C' - 'A']=100;
    romanDict['D' - 'A']=500;
    romanDict['M' - 'A']=1000;
    int result=0;
    int preValue=0;
    int i;
    int currentvalue;
    for(i=0;i<strlen(s);i++)
    {  
         currentvalue=romanDict[s[i]-'A'];
        if(currentvalue>preValue)
        {
            result+=currentvalue-2*preValue;
        }
        else
        {
            result+=currentvalue;
        }
        preValue=currentvalue;
    }
    return result;
    }