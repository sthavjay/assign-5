#include "book.h"

Book::Book(int id, string bookName, string auth, string cat) {
    // complete constructor
    bookID = id;
   title = bookName;
  author = auth;
  category =  cat;

}
//void Book:: setTitle(string bookName) { title = bookName};
string Book::getTitle() {
    return title;// complete
}


string Book::getAuthor() {
    return author; // complete
}

string Book::getCategory() {
    return category; // complete
}

int Book::getId() {
    return bookID; // complete
}
void Book::setPersonPtr(Person * ptr) {
  personPtr = ptr;
}


Person * Book::getPersonPtr() {
    return personPtr;
}
