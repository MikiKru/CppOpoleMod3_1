#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include "time.h"
#include <fstream>  // operacje na plikach

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
                cumSum += i;        // jeśli dzielnik dzieli się bez reszty przez liczbę to dodajemy go do sumy skumulowanej
            }
        }
        return cumSum;
    }
    bool isPerfectNumber(int number){
        return number == sumOfDiv(number);  // porównanie liczby z sumą dizelników zwracaną przez metodę sumOfDiv()
    }
};
    void fileOperations(){

//        ofstream: Stream class to write on files
//        ifstream: Stream class to read from files
//        fstream: Stream class to both read and write from/to files.

        ofstream myFile;         // obiekt do obsługi zapisu do pliku
        myFile.open("myFile.txt");  // utworzy plik o nazwie myFile.txt

        if(myFile.good()){
            cout << "Wprowadz tekst do pliku:" << endl;
            string input;        // zmienna napisowa
            getline(cin, input);    // wprowadzanie z cl do zmiennej ze spacjami
            myFile << input;     // zawartośc zmiennej input wrzucam do pliku

        } else {
            cout << "cos poszlo nie tak" << endl;
        }
        myFile.close();         // zamknięcie strumienia danych plikowych

        ifstream readMyFile;    // obiekt do obsługi odczytu z pliku
        readMyFile.open("plik.txt");
        string line;            // zmienna do której wprowadzimy zawartość z pliku
        cout << "Zawartośc pliku plik.txt" << endl;
        while(getline(readMyFile, line)){
            cout << line << endl; // przeniesienie załej zawartości z pliku do zmiennej
        }
        readMyFile.close();
    }
    //   @
    //  **@
    //  ma
    // **@**
    //****@**
    string drawChristmasTree(int n){
        srand(time(NULL));
        string christmasTree = "";
        for(int i = 1; i < 2*n; i = i + 2){
            for (int k = 1; k <= (2*n - i)/2; k++) {
                christmasTree += " ";
            }
            // dodawanie gwiazdek
            for (int j = 1; j <= i; j++) {
                string bubbles [] = {"O","?","o", "*", "*", "*","*"};
                int index = rand() % 7;
                if(i == 1) {
                    christmasTree += "+";
                } else {
                    christmasTree += bubbles[index];
                }
            }
            christmasTree += "\n";
            // noga
            if(i == 2*n - 1){
                for (int x = 1; x <= (2*n - 1)/2; x++) {
                    christmasTree += " ";
                }
                christmasTree += "H";
            }
        }
        return christmasTree;
    }
    void saveChristmasTree(string christmasTree){
        ofstream toFile;
        toFile.open("christmasTree.txt");
        toFile << christmasTree;
        toFile.close();
        cout << "Choinka zostala zarchiwizowana" << endl;
    }

    // Napisz program zliczający statystykę występowania znaków "O","?","o", "*" w pliku z choinką
    void getStatsFromChristmasTree(string christmasTree){
        cout << christmasTree << endl;
        int Ostats = 0;
        int Pstats = 0;
        int ostats = 0;
        int Sstats = 0;
        for (int i = 0; i < christmasTree.length() ; i++) {
            if(christmasTree[i] == 'O'){
                Ostats++;
            } else if (christmasTree[i] == '?'){
                Pstats++;
            } else if (christmasTree[i] == 'o'){
                ostats++;
            } else if (christmasTree[i] == '*'){
                Sstats++;
            }
        }
        cout << "O wystepuje: " << Ostats << "razy" << endl;
        cout << "? wystepuje: " << Pstats << "razy" << endl;
        cout << "o wystepuje: " << ostats << "razy" << endl;
        cout << "* wystepuje: " << Sstats << "razy" << endl;
    }
    // linkedin.com

    // TRY - CATCH
    void division(double number1, double number2){
        try {
            double result = ((double) number1) / number2;
            if(number2 == 0){       // sytuacja w której bede wyrzucał wyjątek
                throw exception();
            }
            cout << result << endl;
        } catch(exception& e){      // wyłapuje wystąpienie błędu klasy exception
            cout << "Nie mozna dzielic przez zero!!!";  // obsługa błędu pojawia się wtedy gdy
                                                        // wyjątek zostnie zgłoszony
        }
    }


class MyException1 : exception{
    public:
        MyException1(){
            cout << "Wyjatek nr 1" << endl;
        }
};
class MyException2 : exception{
public:
    MyException2(){
        cout << "Wyjatek nr 2" << endl;
    }
};
class MyException3 : exception{
public:
    MyException3(){
        cout << "Wyjatek nr 3" << endl;
    }
};

void fileNameValid(){
    string fileName;
    try {
        cout << "Podaj nazwe pliku" << endl;
        getline(cin, fileName);
        ifstream file;
        file.open(fileName + ".txt");
        if (file.good()) {
            cout << "PLIK ISTNIEJE" << endl;
        } else {
            throw exception();
        }
    }catch (exception e){
        cout << "PLIK NIE ISTNIEJE" << endl;
    }
}

int main() {
    fileNameValid();
    return 0;
}





















