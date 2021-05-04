#include "terminal_io.hpp"

int main () {

    int year = 0;
    int age = 0;
    string name = "";

    cout<<"What is yout name?\t";
    cin>>name;
    cout<<"what year where born you?\t";
    cin>>year;
    cout<<"How old are you?\t";
    cin>>age;
    cout<<"Welcome "<<name<<"!\n";
    cout<<"We are in "<<age + year  + 1<<"\n";

    return 0;
}
