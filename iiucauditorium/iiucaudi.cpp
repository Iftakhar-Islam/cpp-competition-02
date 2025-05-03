#include <iostream>
 using namespace std;

 class IIUC_Auditorium {
 private:
     int hallID;
     int maxcapacity;
     float area;
     float totalSpace;

 public:
     IIUC_Auditorium( int id, int capacity,float a, float s) {
         hallID = id;
         maxcapacity = capacity;
         area = a;
         totalSpace = s;
         
     }


     IIUC_Auditorium(const IIUC_Auditorium &Auditorium) {
         hallID =Auditorium.hallID;
         maxcapacity = Auditorium.maxcapacity;
         area =Auditorium.area;
         totalSpace = Auditorium.totalSpace;
         
     }


     void display() {
         cout << "Total Space: " << totalSpace  << endl;
         cout << "Maximum Capacity: " << maxcapacity  << endl;
         cout << "Hall ID: " << hallID << endl;
         cout << "Area: " << area << endl;
         
     }
 };

 int main() {

     IIUC_Auditorium hall1(6000, 3000, 350, 650);
     IIUC_Auditorium hall2(7000, 4000, 400,700);


     IIUC_Auditorium hall3 = hall1;


     hall1.display();
     hall2.display();
     hall3.display();

     return 0;
 }
