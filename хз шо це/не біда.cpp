#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, T;
    cout << "������ ������� �������� ������: ";
    cin >> n;

    vector<int> arr(n);
    cout << "������ �������� ������: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "������ ����� T: ";
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
        cout << "����� ������� ������������� ��'������ ��������: " << index << endl;
    }
    else {
        cout << "³�'����� �������� �� ������� ��������, ������� �� T, �� ��������." << endl;
    }

    return 0;
}