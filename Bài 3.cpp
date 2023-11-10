#include <iostream>
#include <string>

using namespace std;

string encodeString(const string& s) {
    string result = "";
    int count = 1;

    for (int i = 0; i < s.length(); ++i) {
        // Nếu ký tự hiện tại giống với ký tự kế tiếp, tăng biến đếm
        if (s[i] == s[i + 1]) {
            count++;
        } else {
            // Nếu ký tự hiện tại khác với ký tự kế tiếp, thêm ký tự và số lần xuất hiện vào chuỗi kết quả
            result += s[i] + to_string(count);
            count = 1;
        }
    }

    return result;
}

int main() {
    string s;

    cout << "Nhap chuoi s: ";
    cin >> s;

    string encodedString = encodeString(s);

    cout << "Chuoi ma hoa: " << encodedString << endl;

    return 0;
}