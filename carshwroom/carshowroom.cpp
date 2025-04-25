#include <iostream>
 #include <string>
 using namespace std;

 class Car_Showroom {
 private:
     string showroomName;
     int numOfCars;
     float showroomArea;
     int showroomID;

 public:

     Car_Showroom(string name, int cars, float area, int id) {
         showroomName = name;
         numOfCars = cars;
         showroomArea = area;
         showroomID = id;
     }


     Car_Showroom(const Car_Showroom &showroom) {
         showroomName = showroom.showroomName;
         numOfCars = showroom.numOfCars;
         showroomArea = showroom.showroomArea;
         showroomID = showroom.showroomID;
     }


     void display() {
         cout << "Showroom Name: " << showroomName << endl;
         cout << "Number of Cars: " << numOfCars << endl;
         cout << "Showroom Area: " << showroomArea << " sq.ft" << endl;
         cout << "Showroom ID: " << showroomID << endl;
     }
 };

 int main() {
     Car_Showroom room1("AutoWorld", 50, 1500.75, 101);
     Car_Showroom room2("CarZone", 30, 1200.50, 102);


     Car_Showroom room3 = room1;

    room1.display();
    room2.display();
    room3.display();

     return 0;
 }