#include<iostream>

//#include "CAN.h"

using namespace std;
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
    unsigned int dispay() const;
   // CAN(std::string); 
    ~CAN();
};


CAN::CAN():m_id(100), m_dlc(4), m_data(34)
{

} 

CAN::CAN(unsigned int x, unsigned int y):m_id(x),m_dlc(y),m_data(7687)
{   
}

  CAN::CAN(unsigned int a, unsigned int b, unsigned int c):m_id(a),m_dlc(b),m_data(c)
{
    /*char x;
    x = cout << m_id + m_dlc + m_data;
    return x;*/
}
CAN::~CAN()
{}
unsigned int CAN::id() const
    {
        return m_id;
    }
unsigned int CAN::dlc() const
    {
        return m_dlc;
    }
unsigned int CAN::data() const
    {
        return m_data;
    }
unsigned CAN::dispay() const
    {
        return m_id + m_dlc + m_data;
    }
 

/*class CANFrame 
{
uint32_t m_id;
uint8_t m_dlc;
uint8_t m_data[max_dlc]; //uint8_t *m_data;
public:
CANFrame();
CANFrame(uint8_t,uint8_t,uint8_t*);
//id, dlc and data
CANFrame(uint8_t,uint8_t);
//id, dlc, data will be random
CANFrame(std::string); //65#A1B2C3D4*/