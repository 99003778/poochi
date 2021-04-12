#include<iostream>
#include"complex.h"
#include<string>
Mstring operator+(const Mstring& x)
       {
        len = strlen(str);
        int len1 = strlen(x.str);
        char str2[len+len1+1];
        strcpy(str2,str);
        strcat(str2,x.str);
        return Mstring(str2);
       }
        void operator=(char*);
        ~Mstring()
        {
         if(NULL != str)
         delete[] str;      
        }
int main()
{
    Mstring S1;
      S1 = "vikram";
      Mstring S2;
      S2 = "shila";
      Mstring S3;
      S3 = S1 + S2;
      return 0;
}

