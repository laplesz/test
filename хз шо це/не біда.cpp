#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, T;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Введіть число T: ";
    cin >> T;

    int maxVal = -1, index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > T) {
            break;
        }

        if (arr[i] < 0 && (index == -1 || arr[i] > maxVal)) {
            maxVal = arr[i];
            index = i;
        }
    }

    if (index != -1) {
        cout << "Номер першого максимального від'ємного елемента: " << index << endl;
    }
    else {
        cout << "Від'ємних елементів до першого елемента, більшого за T, не знайдено." << endl;
    }

    return 0;
}