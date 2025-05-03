#include <iostream>
 #include <string>
 using namespace std;

 class Car_Showroom {
 private:
     int numCar;
     int showroomid;
     float showroomarea; 
     string showroomName;
 public:

     Car_Showroom( int car,  int id,float area , string name) {
         numCar = car;
         showroomid = id;
         showroomarea = area;
         showroomName = name;
     }


     Car_Showroom(const Car_Showroom &showroom) {
          numCar = showroom.numCar;
         showroomid = showroom.showroomid;
         showroomarea = showroom.showroomarea;
         showroomName = showroom.showroomName;
     }


     void display() {
         cout << "Showroom Name= " << showroomName << endl;
         cout << "Number of Cars= " << numCar << endl;
         cout << "Showroom Area= " << showroomarea << endl;
         cout << "Showroom ID= " << showroomid ;
     }
 };

 int main() {
     Car_Showroom room1("World", 50, 1500.75, 101);
     Car_Showroom room2("CarArea", 30, 1200.50, 102);


     Car_Showroom room3 = room1;

    room1.display();
    room2.display();
    room3.display();

     return 0;
 }
