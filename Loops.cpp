#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 75) {
        cout << "Grade: B" << endl;
    } else if (score >= 50) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}

// for loop
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    return 0;
}

// while loop
int i = 1;
while (i <= 5) {
    cout << i << " ";
    i++;
}


//do-while loop
int i = 1;
do {
    cout << i << " ";
    i++;
} while (i <= 5);
