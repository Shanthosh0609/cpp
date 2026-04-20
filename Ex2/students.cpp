#include <iostream>
#include <cstring>
using namespace std;
class student {
   int num, marks;
   char name[100];
   public:
   student(int x, int y, const char* z) {
      num = x;
      marks = y;
      strcpy(name, z);
   }
   void display() {
      cout << "The register number: " << num << endl;
      cout << "The marks is: " << marks << endl;
      cout << "The name is: " << name << endl;
   }

   student(const student &s) {
      strcpy(name, s.name);
      num = s.num;
      marks = s.marks;
   }
};
int main() {
   student s(21, 95, "Prabu");
   s.display();
   student s1(s);
   student s2 = s;
   s1.display();
   s2.display();
   return 0;
}
