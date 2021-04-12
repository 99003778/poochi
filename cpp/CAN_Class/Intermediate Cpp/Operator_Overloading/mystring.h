#ifndef __COMPLEX_H
#define __COMPLEX_H
class mystring
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
        Mstring(const Mstring& ref):str(NULL), len(ref.len)
        {
          this->str = new char[ len + 1 ];
          strncpy(this->str, ref.str, len+1);
       }
    };
    void Mstring::operator=(char* str)
    {
        len = strlen(str);      
        this->str = new char[ len + 1 ];        
        strncpy(this->str, str, len+1);        
    }
#endif