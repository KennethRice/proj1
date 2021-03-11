#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


double addition(double x, double y){
    return x+y;

}

double subtraction(double x, double y){
    return x-y;

}

double production(double x, double y){
    return x*y;

}

double division(double x, double y){
    return x / y;

}
class SortedStrings {
public:
    void AddString(const string& s) {
        data.push_back(s);
    }
    vector<std::string> GetSortedStrings() {
        sort(begin(data), end(data));
        return data;
    }
private:
    vector<string> data;
};
void PrintSortedStrings(SortedStrings& strings) {
    for (const string& s : strings.GetSortedStrings()) {
        cout << s << " ";
    }
    cout << endl;
}

int main() {
    double x, y, result;
    int op;
    std::cout << "Enter operands(x and y):";
    std::cin >> x >> y;

    std::cout << "Choose operation:\n1 - addition\n2 - subtraction\n3 - production\n4 - division\n";
    std::cin >> op;

    switch(op){
        case 1:
            result = addition(x, y);
            break;
        case 2:
            result = subtraction(x, y);
            break;
        case 3:
            result = production(x, y);
            break;
        case 4:
            result = division(x, y);
            break;
        default:
            std::cout << "invalid";
            break;
    }

    std::cout << "Result: " << result << "\n";
    
    cout << "enter 5 words to get sorted strings";
    SortedStrings strings;
    string s;
    for (int i = 0; i < 5; i++) {
        cin >> s;
        strings.AddString(s);
    }
    PrintSortedStrings(strings);

    return 0;
}
