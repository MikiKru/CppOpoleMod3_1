#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include "time.h"

using namespace std;

class Auto{
private:
    string brand;
public:
    Auto(){}
    Auto(string brand){
        this->brand = brand;
    }
    string getBrand(){
        return brand;
    }
    void setBrand(string brand){
        this->brand = brand;
    }
    void toString(){
        cout << brand << endl;
    }
};
class Hybrid : public Auto{
private:
    string model;
public:
    Hybrid(string brand, string model) : Auto(brand){
        this->model = model;
    }

    string getModel(){
        return model;
    }
    void setModel(string model){
        this->model = model;

    }
    void toString(string brand){
        cout << brand << " " << model << endl;
    }
    void toString(){
        cout << getBrand() << " " << model << endl;
    }
};

class Course{
private:
    string name, category;
    int participants;
    string date;
    string trainer;
public:
    Course(){
        this->name = "";
        this->category = "";
        this->participants = 0;
        this->date = "";
        this->trainer = "";
    }
    Course(string name, string category, int participants, string date, string trainer){
        this->name = name;
        this->category = category;
        this->participants = participants;
        this->date = date;
        this->trainer = trainer;
    }
    Course(string name, string category, int participants, string date){
        this->name = name;
        this->category = category;
        this->participants = participants;
        this->date = date;
        this->trainer = "";
    }
    void incrementParticipants(){
        this->participants++;
    }
    void decrementParticipants(){
        this->participants--;
    }
    void toString(){
        cout << "name " << name << " category: " << category <<
        " participants: " << participants << " date: " << date << " trainer: " << trainer << endl;
    }
};

int main() {
    Course c0;
    c0.toString();
    Course c1("C++", "IT", 10, "2020-01-01", "MK");
    c1.toString();
    Course c2("C++", "IT", 10, "2020-01-01");
    c2.toString();
    return 0;
}