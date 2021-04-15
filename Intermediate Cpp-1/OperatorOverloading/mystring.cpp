#include<iostream>
#include"mystring.h"
#include<string>
void Mstring::operator=(char* str)
{
    len = strlen(str);
    this->str = new char[ len + 1 ];
    strncpy(this->str, str, len+1);
    //int strncmp(char *str1, char *str2, size_t len);
}
/*void Mstring::operator += (char* str)
{
    len = strlen(str);
    this->str = new char[ len + 1 ];
    strncpy(this->str, str, len+1);
    strcat(str, "1234");
    
}*/
/*void Mstring::operator = (char* str)
{
    len = strlen(str);
    this->str = new char[ len + 1 ];
    strncmp(const char *str1, const char *str2, len+1);
}*/
int main() 
{
  Mstring S1;
  S1 = "vikram";
  Mstring S2;
  S2 = "shila";
  Mstring S3;
  S3 = S1+S2;
  Mstring S4;
  S4 = S1 + "xyz";
  
  //Mstring S5;
  //S5 = "vikram";
  //S1 == S5;

  //S1==S2;
  //Mstring S2("Bharath");
  //Mstring S3(S2); 

  return 0;
}
