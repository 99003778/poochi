#ifndef __CAN_H
#define __CAN_H
//#include<string>

class CAN
{    unsigned int m_id;
    unsigned int m_dlc;
    unsigned int m_data;
public:
    //CAN(/* args */);
    CAN(); 
    CAN(unsigned int,unsigned int,unsigned int); 
    CAN(unsigned int,unsigned int); 
    unsigned int id() const;
    unsigned int dlc() const;
    unsigned int data() const;
    void dispay() const;
   // CAN(std::string); 
    ~CAN();
};

#endif