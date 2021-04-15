#ifndef __INHERITANCE_H_
#define __INHERITANCE_H_
#include<string>
#include<iostream>

//template <typename DT>
class AccountBase
{   public:   
        std::string m_accNum ;
        std::string m_accName ;
        double m_balance;
    public:
    AccountBase();
    AccountBase(std::string num,std::string name,double val);
    AccountBase(std::string,std::string);
    AccountBase(const AccountBase& ref);
     //double debit(double);
    // double credit(double);
     void disp();
    double getBalance(void); 
    std::string accNum();
    std::string accName();

    
    ~AccountBase();

};

class SavingsAccount: public AccountBase
{
    public:
    SavingsAccount();
    SavingsAccount(std::string num,std::string name,double val);
    SavingsAccount(std::string,std::string);
    double debit(double);//override
    double credit(double);//override
    double getBalance(void);
    void disp();//override
    ~SavingsAccount();

};

class CreditAccount: public SavingsAccount
{
    public:
    CreditAccount();
    CreditAccount(std::string num,std::string name,double val);
    CreditAccount(std::string,std::string);
    double debit(double);//override
    double credit(double);//override
    double getBalance(void);
    void disp();//override
    ~CreditAccount();
};

#endif