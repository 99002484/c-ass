#include"library.h"
void Library::addBook(int id, std::string title, std::string author, 
                            int publisher, double price, int pages) {
    //Book temp(isbn, title, author, publisher, price, pages);
    //books.push_back(temp);                            
    
    //books.push_back(Book(id, title, author, publisher, price, pages));
    
    books.emplace_back(id, title, author, publisher, price, pages);
}
void Library::addbook(){
for(iter=books.begin(); iter!=books.end(); ++iter)
       if(iter->id() == keyIsbn)
}
void Library::removeBookbyid(int keyid) {
   /*for(iter=books.begin(); iter!=books.end(); ++iter)
       if(iter->id() == keyid)
          break;
   }
   if(iter!=books.end())
     books.erase(iter);*/
   std::remove_if(books.begin(), books.end(), [keyid](const Book& ref) {
     return ref.id() == keyid;
   });     
}

void Library::displayAll() {
   std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
       iter->display();
   //for(Book& ref:books)
   //       ref.display();
}
Book* Library::findBookbyid(int keyid) {
   std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
       if(iter->id() == keyid)
          break;
   }
   if(iter!=books.end())
     return &(*iter);
   else
     return nullptr;
}
bool Library::isBookFound(int keyIsbn) {
   /*for(iter=books.begin(); iter!=books.end(); ++iter)
       if(iter->isbn() == keyIsbn)
          break;
   }*/
   //int key=keyIsbn;
   auto iter = std::find_if(books.begin(), books.end(), [=](const Book& ref) {
       return ref.isbn() == keyIsbn;        //ref.getIsbn()
   });
   if(iter!=books.end())
     return true;;
   else
     return false;
}

double Library::findAveragePrice() {
  double totalPrice=0;
  for(iter=books.begin(); iter!=books.end(); ++iter)
     totalPrice += iter->price();
  return totalPrice/books.size();
}
int Library::countBooksInPriceRange(int minVal, int maxVal) {
  int count=0;
  /*for(iter=books.begin(); iter!=books.end(); ++iter)
    if(iter->price() > minVal && iter->price() < maxVal) count++;*/
  count=std::count_if(books.begin(), books.end(), [minVal,maxVal](const Book& ref) {
    return ref.price() > minVal && ref.price() < maxVal;    //ref.getPrice()
  });  
  return count;
}
Book& Library::findBookwithMaxPages() {
  /*std::list<Book> iter = books.begin()
  auto maxIter=iter;
  double maxPrice=iter->price();
  ++iter;
  for(;iter!=books.end(); ++iter)
    if(iter->price() > maxPrice) {
        maxPrice = iter->price();
        maxIter = iter;
    }
  */
  auto iter = std::max_element(books.begin(), books.end(), [] (Book& r1, Book& r2) {
     return price() < r2.price();
  });
  return *maxIter;
}
Book& Library::findBookwithMinPages() {
  /*std::list<Book> iter = books.begin()
  auto maxIter=iter;
  double minPrice=iter->price();
  ++iter;
  for(;iter!=books.end(); ++iter)
    if(iter->price() > minPrice) {
        minPrice = iter->price();
        minIter = iter;
    }
  */
  auto iter = std::min_element(books.begin(), books.end(), [] (Book& r1, Book& r2) {
     return price() > r2.price();
  });
  return *minIter;
}
double Library::findMinPricebyPublisher() {
  double totalPrice=0;
  for(iter=books.begin(); iter!=books.end(); ++iter)
     totalPrice += iter->price();
  return totalPrice/books.size();
}
int Library::countBooksInPriceRange(int minVal, int maxVal) {
  int count=0;
  /*for(iter=books.begin(); iter!=books.end(); ++iter)
    if(iter->price() > minVal && iter->price() < maxVal) count++;*/
  count=std::count_if(books.begin(), books.end(), [minVal,maxVal](const Book& ref) {
    return ref.price() > minVal && ref.price() < maxVal;    //ref.getPrice()
  });  
  return count;
}
int Library::countBooksInPriceRange(int minVal, int maxVal) {
  int count=0;
  /*for(iter=books.begin(); iter!=books.end(); ++iter)
    if(iter->price() > minVal && iter->price() < maxVal) count++;*/
  count=std::count_if(books.begin(), books.end(), [minVal,maxVal](const Book& ref) {
    return ref.price() > minVal && ref.price() < maxVal;    //ref.getPrice()
  });  
  return count;
}