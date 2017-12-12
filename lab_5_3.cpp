#include <iostream>

using namespace std;

int main() {

    int score;
    cout << "Enter your score(0-100) : ";
    cin >> score;
    cout << endl;
    if(score > 100) {
        cout << "Put wrong score" << endl;
    } else if (score > 80) {
        cout << "Grade 4" << endl;
    } else if (score > 75) {
        cout << "Grade 3.5" << endl;
    } else if (score > 70) {
        cout << "Grade 3" << endl;
    } else if (score > 65) {
        cout << "Grade 2.5" << endl;
    } else if (score > 60) {
        cout << "Grade 2" << endl;
    } else if (score > 55) {
        cout << "Grade 1.5" << endl;
    } else if (score > 50) {
        cout << "Grade 1" << endl;
    }
    return 0;
}
