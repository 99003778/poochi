#ifndef __COMPLEX_H
#define __COMPLEX_H
#include<string.h>
#include<stdlib.h>
using namespace std;
class Mstring
{
private:
    char* str;
    char* str2;
    size_t len;
    size_t len2;
public:
    Mstring(/* args */){};
    Mstring( char* tstr):str(NULL), len(strlen(tstr))
    {
      this->str = new char[ len + 1 ];
      strncpy(this->str, tstr, len+1);
    };
    /*Mstring(const Mstring& ref):str(NULL), len(ref.len)

    {

      this->str = new char[ len + 1 ];

      strncpy(this->str, ref.str, len+1);
    }*/
  Mstring operator+(const Mstring& b)
   {
     int len=strlen(str);
     int len1=strlen(b.str);
      char str2[len+len1+1];
      strcpy(str2,str);
      strcat(str2,b.str);
      return Mstring(str2);
   }
    void operator=(char*);
    ~Mstring()
    {
      if(NULL != str)
        delete[] str; 
    }
    };
#endif