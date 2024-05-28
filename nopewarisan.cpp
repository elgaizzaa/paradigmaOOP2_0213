#include <iostream>
using namespace std;

class baseclass final{
    public:
    virtual void perkenalan() {
        cout << "hallo saya function dari base class";
        
    }
};

class derivedClass : public baseclass {
    public:
  void perkenalan() {
    cout << "hallo saya function dari derived class";
    
  }
};
int main() {
    derivedClass a;
    a.perkenalan();

    return 0;
}




 
