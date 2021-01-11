#ifndef __POSTPAID_H
#define __POSTPAID_H

#include<string>
#include<cstdint>

#include "customer.h"

class PostpaidCustomer : public CustomerBase
 {
  void billPay(double);
 // int m_billDate;

  public:

  PostpaidCustomer();
  PostpaidCustomer(int id,std::string name,std::string phn,double bal);
  PostpaidCustomer(int id,std::string name,std::string phn);
  void credit(double);           //recharge or billPay
  void makeCall(double);
  double getBalance();
  int getCustomerId();
  std:: string getCustomerName();
  std:: string getPhone();
 // void dispay() const;

};

#endif
