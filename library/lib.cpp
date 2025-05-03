#include <iostream>
 #include <string>
 using namespace std;

 class Library {
 private:
     int totalBook;
     int Capacity;
     int libraryid;
     string libraryname;
 public:

     Library( int book, int capacity, int id,string name) {    
         totalBook = book;
         Capacity = capacity;
         libraryid = id;
         libraryname = name;
     }

     Library(const Library &library) {
         totalBook = library.totalBook;
         Capacity = library.Capacity;
         libraryid = library.libraryid;
         libraryname = library.libraryname;
     }


     void display() {
         cout << "Total Books=" << totalBook<< endl;
         cout << "Sitting Capacity=" << Capacity << endl;
         cout << "Library ID=" << libraryid << endl;
         cout << "Library Name=" << libraryname << end;
     }
 };

 int main() {

     Library library1("Central Library", 5000, 350, 300);
     Library library2("City Library", 5500, 400, 500);


     Library library3 = library1;

     library1.display();
     library2.display();
     lib3.display();

     return 0;
 }
