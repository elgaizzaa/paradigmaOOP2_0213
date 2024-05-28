#include <iostream>
using namespace std;

class remoteLampu {
    private:
        string saklarNo[10];
    public:
        void setsaklarNo(int i, string value) {
            saklarNo[i] = value;
        }
        string getsaklarNo(int i) {
            return saklarNo[i];
        }

};
int main() {
    remoteLampu LampuRumah;

    LampuRumah.setsaklarNo(0, "lampu Teras Rumah");
    LampuRumah.setsaklarNo(1, "lampu Ruang Tamu");
    LampuRumah.setsaklarNo(2, "lampu Kamar Tidur");
    LampuRumah.setsaklarNo(3, "lampu Dapur");

    cout << LampuRumah.getsaklarNo(0)<< endl;
    cout << LampuRumah.getsaklarNo(1)<< endl;
    cout << LampuRumah.getsaklarNo(2)<< endl;
    cout << LampuRumah.getsaklarNo(3)<< endl;
    return 0;
}

