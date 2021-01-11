#ifndef __BOOK_H
#define __BOK_H

class Book {
  int m_isbn;     //ideally to be std::string
  std::string m_title;
  std::string m_author;
  //std::string m_publisher;
  int m_year;       //publishing
  double m_price;
  int m_pages;
  public:
  //TODO: default ctor
  //TODO: param ctor
  //TODO: getter functions - isbn(), title(), author()
  //                       - author(), publisher(), year()
  //                       - price(), pages()
  //TODO:- display
  //TODO:- const suffix for immutable function

};
#endif