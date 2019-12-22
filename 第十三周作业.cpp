#include <stdio.h>
#include <math.h>
#include <string.h>

bool isPrime(int n)  
{  
    for(int i = 2; i <= sqrt(n); ++i)  
    {  
        if(n%i == 0)  
            return false;  
    }  
    return true;  
}

int main()
{
    int count = 0;
    
    for(int i = 101; i < 10001; i+=2)
    {
        int  temp = i;
        bool flag = true;
        while(temp)
        {
            if(isPrime(temp))
            {
                temp /= 10;
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            count++;
            printf("%4d ", i);
            if(count%5 == 0)
                putchar('\n');
        }
    }
    return 0;
}
