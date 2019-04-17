// Bijaya Shrestha
// Section
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "person.cpp"
#include "book.cpp"

using namespace std;

void printMenu() {
    cout << "----------Library Book Rental System----------" << endl;
    cout << "1.  Book checkout" << endl;
    cout << "2.  Book return" << endl;
    cout << "3.  View all available books" << endl;
    cout << "4.  View all outstanding rentals" << endl;
    cout << "5.  View outstanding rentals for a cardholder" << endl;
    cout << "6.  Open new library card" << endl;
    cout << "7.  Close library card" << endl;
    cout << "8.  Exit system" << endl;
    cout << "Please enter a choice: ";
}

// You are not obligated to use these function declarations - they're just given as examples
void readBooks(vector<Book *> & myBooks) {
  Book *b;
    int id;
    string bookName;
    string auth;
     string cat;
     ifstream input;
     input.open("books.txt");
     if (input.is_open()) {
       ( input >> id)
       while (input >>id)  {
         getline(input,bookName);
         getline(input,auth);
         getline(input,cat);
         b = new Book (id,bookName,auth,cat);
         myBooks.push_back(b);
       }

       input.close();
     }
     esle {
       cout<< "sorry cannot open a fie\n";
     }
    return;
}
//------------------------------------------------------------------------------
int readPersons(vector<Person *> & myCardholders) {
  int cardID;
  int prevcardID =0;
  bool isActive = false;
  string fName;
  string lName;
  Person *p;
  p = new Person (cardID,isActive,fName,lName)

  ifstream input;
  input.open("persons.txt");
  while(input>>cardID){
    input>>isActive;
    input>>fName;
    input>>lName;
    myCardholders.push_back(p);


  }

    return 0;
}

void readRentals(vector<Book *> & myBooks, vector<Person *> myCardholders) {
  ifstream input;
  input.open("rentals.txt");
  int bookID;
  int cardID;
if(input.is_open())
{
  while (input>>bookID>>cardID)
  cout<<id << "" <<cardID << endl;
}
  input.close();
}

void openCard(vector<Person *> & myCardholders, int nextID) {
bool active = 0;
string fName;
string lName;
cout<<"please enter a first name; \n";
cin >> fName;
cout<<"please enter a last name; \n";
cin >> lName;
 Person *p;

 for (int i = 0; i<myCardholders.size(); i++)

 p = new Person ( nextID, active, fname,lName);


return;
}
//
// Book * searchBook(vector<Book *> myBooks, int id) {
//     return nullptr;
// }

Person * findPerson(vector<Person> myCardholders, int cardID){

  for (int i = 0;i<myBooks.size; i++){

  }
}

 void bookCheckout (vector<Book *> & myBooks, vector<Person *> myCardholders){

   int cardID;
   int bookID;
   string fName;
   string lName;
    string title;
   for (int i =0, i<myBooks.size; i++)
   {
     if (cardID == myCardholders.at(i)->getcardNo){
     cout<< "Please enter the card ID: "<< endl;
     cin>> cardID;
   }
     else{
       cout" CardID could not found"<<endl;
     }
     cout<<"cardholder:"<<myCardholders.at(i).fullName << endl;

     if (bookID == myBooks.at(i)->getId){
     cout<<"Please enter the book ID: " << endl;
     cin>>bookID;
  }
     else{
       cout<< "Book ID could not found<<endl;
     }
     cout<<"Title: "<< myBooks.at(i).title<<endl;

   }



 }

int main()
{
    vector<Book *> books;
    vector<Person *> cardholders;

     readBooks(books);
     readPersons(cardholders);
     readRentals (books, cardholders);

    int choice;
    do
    {
        // If you use cin anywhere, don't forget that you have to handle the <ENTER> key that
        // the user pressed when entering a menu option. This is still in the input stream.
        printMenu();
        cin >> choice;
        switch(choice)
        {
            case 1:
                // Book checkout
                break;

            case 2:
                // Book return
                break;

            case 3:
                // View all available books
                break;

            case 4:
                // View all outstanding rentals
                break;

            case 5:
                // View outstanding rentals for a cardholder
                break;

            case 6:
                // Open new library card
                break;

            case 7:
                // Close library card
                break;

            case 8:
                // Must update records in files here before exiting the program
                break;

            default:
                cout << "Invalid entry" << endl;
                break;
        }
        cout << endl;
   } while(choice != 8);
      return 0;
}
