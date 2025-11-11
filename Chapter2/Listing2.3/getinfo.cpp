// getinfo.cpp -- input and output
#include <iostream>
int main(){
    using namespace std;

    int carrots;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;             // C++ input
    cout << "Here are to more.";
    carrots = carrots + 2;
    // baris berikutnya menggabungkan output
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}