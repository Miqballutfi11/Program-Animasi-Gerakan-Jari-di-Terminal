#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void showFingerAnimation() {
    string hand[5] = {"|    ", "|    ", "|    ", "|    ", "|    "};

    cout << "Animasi Gerakan Jari:\n";
    for (int step = 0; step < 10; step++) {
        system("clear"); // Untuk Windows: gunakan "cls"
        for (int i = 0; i < 5; i++) {
            hand[i] = (step % 2 == 0) ? "|    " : "|===="; // Ubah posisi jari
            cout << hand[i] << "\n";
        }
        this_thread::sleep_for(chrono::milliseconds(300));
    }
}

int main() {
    showFingerAnimation();
    cout << "\nAnimasi selesai!\n";
    return 0;
}
