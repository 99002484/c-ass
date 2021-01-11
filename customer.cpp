#include"customer.h"

void Account::addAccount(int id, std::string name, std::string balance, 
                            int phone) {
    //Book temp(id, name, balance,phone);
    //books.push_back(temp);                            
    
    //books.push_back(Cust(id, name, balance, phone));
    
    books.emplace_back(id, name, balance);
}
void Account::displayAll(){
  std::list<Cust>::iterator iter;
  for(iter=cust.begin();iter!=cust.end();++iter)
   iter->display();
}
Cust* Account::findCustbyid(int id){
  std::list<Cust>::iterator iter;
  for(iter=cust.begin(); iter!=cust.end(); ++iter)
   if(iter->id()==keyid)
      break;
}
if(iter!=cust.end())
 return &(*iter);
else
 return nullptr;
}
void Account::findStringmatch(String id){
std::list<Cust>::iterator iter;
for(iter=cust.begin();iter!=cust.end();++iter)
if(iter->id()==keyid)
break;
}
if(iter!=cust.end())
 return &(*iter);
else
 return nullptr;
}

void Account::findAccountInPriceRange(int minprice int maxprice){
int count=0;
for(iter=cust.begin();iter!=cust.end();++iter)
if(iter->price() > minprice && iter->price < maxprice)count++;
count=std::count_if(books.begin(), books.end(), [minVal,maxVal](const Book& ref) {
    return ref.price() > minVal && ref.price() < maxVal;    //ref.getPrice()
  });  
  return count;
}
double Acccount::findAveragePrice(){
double totalprice=0;
std::list<Cust>::iterator iter;
for(iter=cust.begin();iter!=cust.end();++iter)
totalprice+=iter->price();
return totalprice/cus.size();
}
void Account::FindMaxPrice(){
std::list<Cust> iter = cust.begin()
  auto maxIter=iter;
  double maxPrice=iter->price();
  ++iter;
  for(;iter!=cust.end(); ++iter)
    if(iter->price() > maxPrice) {
        maxPrice = iter->price();
        maxIter = iter;
    }
int Account::countBalanceInPriceRange(int minVal,int maxVal){
int count=0;
for(iter=cust.begin();iter!=cust.end;++iter)
if(iter->price()>minVal && iter->price()<maxVal)count++;
count=std::count_if(books.begin(), books.end(), [minVal,maxVal](const Book& ref) {
    return ref.price() > minVal && ref.price() < maxVal;    //ref.getPrice()
  });  
  return count;
}
int Account::countBalanceLessLimit(int Lval){
int count=0;
for(iter=cust.begin();iter!=cust.end;++iter)
if(iter->price()<Lval)count++;
count=std::count_if(books.begin(), books.end(), [minVal,maxVal](const Book& ref) {
    return ref.price() > minVal && ref.price() < maxVal;    //ref.getPrice()
  });  
  return count;
}

