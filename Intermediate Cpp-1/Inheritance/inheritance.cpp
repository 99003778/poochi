#include"inheritance.h"
//definitions for BASE Class
AccountBase::AccountBase(/* args */):m_accNum("XXXXXXX"),m_accName("XYZ"),m_balance(0) 
{}
AccountBase::AccountBase(std::string num,std::string name,double val):m_accNum(num),m_accName(name),m_balance(val) 
{  }
AccountBase::AccountBase(std::string num,std::string name):m_accNum(num),m_accName(name)
{}
AccountBase::AccountBase(const AccountBase& ref):m_accNum(ref.m_accNum),m_accName(ref.m_accName),m_balance(ref.m_balance) 
{}
std::string AccountBase::accNum()
{    std::string accNum = m_accNum;
    return accNum;
}
std::string AccountBase::accName()
{    std::string accName = m_accName;
    return accName;
}
double AccountBase::getBalance() 
{    return  m_balance;} 
void AccountBase::disp()
{    std::cout<<m_accNum<<'\t'<<m_accName<<'\t'<<m_balance<<'\n';  }
AccountBase::~AccountBase()
{}

//definitions for Derived  Class SavingsAccount
SavingsAccount::SavingsAccount(std::string num,std::string name,double val):AccountBase (num,name,val) 
{  }
SavingsAccount::SavingsAccount(std::string num,std::string name):AccountBase (num,name)
{}

double SavingsAccount::debit(double val)
{      return m_balance+=val;  }
 double SavingsAccount::credit(double val)
{    return (m_balance-=val);  } 
double SavingsAccount::getBalance() 
{    return  m_balance;} 
void SavingsAccount::disp()
{    std::cout<<m_accNum<<'\t'<<m_accName<<'\t'<<m_balance<<'\n';  }
SavingsAccount::~SavingsAccount()
{}

//definitions for Derived  Class CreditAccount


CreditAccount::CreditAccount(std::string num,std::string name,double val):SavingsAccount (num,name,val)//m_accNum(num),m_accName(name),m_balance(val) 
{  }
CreditAccount::CreditAccount(std::string num,std::string name):SavingsAccount (num,name)//m_accNum(num),m_accName(name)
{}

double CreditAccount::debit(double val)
{      return (m_balance-=val);  }
double CreditAccount::credit(double val)
{    return (m_balance+=val);  } 
double CreditAccount::getBalance() 
{    return  m_balance;} 
void CreditAccount::disp()
{    std::cout<<m_accNum<<'\t'<<m_accName<<'\t'<<m_balance<<'\n';  }
CreditAccount::~CreditAccount()
{}




// int main()

// {
// SavingsAccount S1("2200115","Santosh",10000);
// S1.debit(1000);
// CreditAccount C1("2200116","SaM",0);
// C1.debit(1000);
// C1.disp();
// S1.disp();
// }