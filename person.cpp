#include "person.h"

Person::Person(int cardNo, bool act, string fName, string lName) {
    // complete constructor
    firstName= fName;
    lastName = lName;
    cardID = cardNo;
    active = act;
}

string Person::getFirstName() {
    return firstName; // complete
}

string Person::getLastName() {
    return lastName; // complete
}

int Person::getId() {
    return cardID; // complete
}

void Person::setActive(bool act) {
  return active;
} // complete

bool Person::isActive() {
    return true; // complete
}

string Person::fullName() {
    return firstName + "" + lastName; // complete
}
