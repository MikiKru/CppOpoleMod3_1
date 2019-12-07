#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include "time.h"

using namespace std;

class Auto {
private:
    string brand;
public:
    Auto() {}

    Auto(string brand) {
        this->brand = brand;
    }

    string getBrand() {
        return brand;
    }

    void setBrand(string brand) {
        this->brand = brand;
    }

    void toString() {
        cout << brand << endl;
    }
};

class Hybrid : public Auto {
private:
    string model;
public:
    Hybrid(string brand, string model) : Auto(brand) {
        this->model = model;
    }

    string getModel() {
        return model;
    }

    void setModel(string model) {
        this->model = model;

    }

    void toString(string brand) {
        cout << brand << " " << model << endl;
    }

    void toString() {
        cout << getBrand() << " " << model << endl;
    }
};

class Course {
private:
    string name, category;
    int participants;
    string date;
    string trainer;
public:
    Course() {
        this->name = "";
        this->category = "";
        this->participants = 0;
        this->date = "";
        this->trainer = "";
    }

    Course(string name, string category, int participants, string date, string trainer) {
        this->name = name;
        this->category = category;
        this->participants = participants;
        this->date = date;
        this->trainer = trainer;
    }

    Course(string name, string category, int participants, string date) {
        this->name = name;
        this->category = category;
        this->participants = participants;
        this->date = date;
        this->trainer = "";
    }

    void incrementParticipants() {
        this->participants++;
    }

    void decrementParticipants() {
        this->participants--;
    }

    void toString() {
        cout << "name " << name << " category: " << category <<
             " participants: " << participants << " date: " << date << " trainer: " << trainer << endl;
    }

    string getName() {
        return name;
    }
};

class CourseController {
private:
    Course courses[100];
    int index = 0;
public:
    void getCourses() {
        for (int i = 0; i < index; ++i) {
            courses[i].toString();
        }
    }

    Course getCourseByName(string name) {
        for (int i = 0; i < index; ++i) {
            if (courses[i].getName() == name) {
                return courses[i];
            }
        }
        Course c;
        return c;
    }

    void addCourse(string name, string category, int participants, string date, string trainer) {
        Course c(name, category, participants, date, trainer);
        courses[index] = c;
        cout << "dodano szkolenie" << endl;
        index++;
    }

    void addParticipant(string name) {
        Course c = getCourseByName(name);
        c.incrementParticipants();
        cout << "dodano uczestnika" << endl;
    }
};

class Org {
private:
    string name;
    int noEmployees;
public:
    // gettery -> pobierają aktualną zawartość zmiennej
    string getName() {
        return this->name;  // zwraca aktualną wartość zmiennej name
    }

    int getNoEmployees() {
        return this->noEmployees;
    }

    // setter -> modyfikuje aktulną warość zmiennej na tą podaną w argumencie metody
    void setName(string name) {
        this->name = name;
    }

    void setNoEmployees() {
        this->noEmployees = noEmployees;
    }

    Org(string name, int noEmployees) {          // Wywoływany jest automatycznie w momencie tworzeniea obiektu
        this->name = name;
        this->noEmployees = noEmployees;
    }

    void toString() {                            // napisowa reprezentacja obiektu -> wartości jego pol kalsowych
        cout << "Organization name: " << this->name << endl;
        cout << "Number of employees: " << this->noEmployees << endl;
    }
};

class Dep : Org {
private:
    string head;
public:
    string getHead() {
        return this->head;
    }

    void setHead(string head) {
        this->head = head;
    }

    Dep(string name, int noEmployees, string head) : Org(name, noEmployees) {
        this->head = head;
    }

    void depToString() {
        cout << "============================" << endl;
        toString(); // wywołanie metody toString z klasy Org
        cout << "Head info: " << this->head << endl;
    }
};

class Algorithms {
public:
    bool isPrimary(int number) {
        // liczba podzielna bez reszty tylko przez 1 i samą siebie
        if (number == 2) {
            return true;
        }
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }

    void getNPrimaryNumbers(int n) {     // n - ilość szukanych liczb pierwszych
        int foundedPrimaryNumbers = 0;   // licznik znalezionych liczb pierwszych
        for (int i = 2; foundedPrimaryNumbers < n; i++) {
            // wywołanie funkcji sprawdzającej czy liczba jest pierwsza
            if (isPrimary(i)) {
                cout << i << " ";
                foundedPrimaryNumbers++;    // każde znalezienie inkrementuje licznik
            }
        }
    }

    int sumOfDiv(int number) {
        int cumSum = 0;
        for (int i = 1; i < number; i++) {
            if (number % i == 0) {
                cumSum += i;        // jeśłi dzielnik dzieli się bez reszty przez liczbę to dodajemy go do sumy skumulowanej
            }
        }
        return cumSum;
    }
    bool isPerfectNumber(number){
        // ??? 
    }
};

int main() {
    Algorithms a;
//    a.getNPrimaryNumbers(10);
    cout << a.sumOfDiv(6) << endl;
    cout << a.sumOfDiv(3) << endl;
    cout << a.sumOfDiv(20) << endl;
    return 0;
}


















