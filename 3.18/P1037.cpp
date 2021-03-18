/**
 * @Author: Max
 * @Time: 3/18/21 10:59
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int arr[26];
    for (int i = 0; i < 26; ++i) {
        arr[i] = 0;
    }
    char charr;
    int max = 0;
    getline(cin,str);
    int n = str.length();
    for (int i = 0; i < n; ++i) {
        switch (str[i]) {
            case 'a':
                arr[0]++;
                break;
            case 'b':
                arr[1]++;
                break;
            case 'c':
                arr[2]++;
                break;
            case 'd':
                arr[3]++;
                break;
            case 'e':
                arr[4]++;
                break;
            case 'f':
                arr[5]++;
                break;
            case 'g':
                arr[6]++;
                break;
            case 'h':
                arr[7]++;
                break;
            case 'i':
                arr[8]++;
                break;
            case 'j':
                arr[9]++;
                break;
            case 'k':
                arr[10]++;
                break;
            case 'l':
                arr[11]++;
                break;
            case 'm':
                arr[12]++;
                break;
            case 'n':
                arr[13]++;
                break;
            case 'o':
                arr[14]++;
                break;
            case 'p':
                arr[15]++;
                break;
            case 'q':
                arr[16]++;
                break;
            case 'r':
                arr[17]++;
                break;
            case 's':
                arr[18]++;
                break;
            case 't':
                arr[19]++;
                break;
            case 'u':
                arr[20]++;
                break;
            case 'v':
                arr[21]++;
                break;
            case 'w':
                arr[22]++;
                break;
            case 'x':
                arr[23]++;
                break;
            case 'y':
                arr[24]++;
                break;
            case 'z':
                arr[25]++;
                break;
        }
    }
    for (int i = 0; i < 26; ++i) {
        if (arr[i] > max){
            max = arr[i];
            charr = char(arr[i]+96);
        }
    }
    cout << charr << " " << max;
    return 0;
}
