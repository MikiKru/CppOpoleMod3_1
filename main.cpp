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
    void toString(){
        cout << getBrand() << " " << model << endl;
    }
};
int main() {

    return 0;
}