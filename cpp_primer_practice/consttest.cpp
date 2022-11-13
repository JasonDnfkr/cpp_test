#include <cstdio>
#include <string>
#include <iostream>
#include <cstdint>
#include <initializer_list>

using std::string;
using std::cin;
using std::cout;
using std::endl;

class matrix { };

bool is_contain_capital(const string& str) {
    for (auto& ch : str) {
        if (isupper(ch)) return true;
    }
    return false;
}


void to_lowercase(string& str) {
    for (auto& ch : str) {
        ch = tolower(ch);
    }
}


// bool compare()
void print_array(const int* begin, const int* end) {
    while (begin != end) {
        cout << *begin++;
    }
    cout << endl;
}

void print_array(int (&arr)[5]) {
    for (auto num : arr) {
        cout << num;
    }
    cout << endl;
}

 
void swap_ptr(int* &a, int* &b) {
    int* tmp = a;
    a = b;
    b = tmp;
}


void swap_ptr(int** a, int** b) {
    // uint64_t tmp = (uint64_t)*a;
    // *a = *b;
    // *b = (int*) tmp;

     int* tmp = *a;
     *a = *b;
     *b = tmp;
}

void fun2(const int (&arr)[10]) {
    for (int i = 0; i < 10; i++) {
        cout << arr[i];
    }
}


int fun3(std::initializer_list<int> list) {
    int sum = 0;
    std::initializer_list<int>::iterator it = list.begin();
    while (it != list.end()) {
        sum += *it;
        it++;
    }
    return sum;
}


int main() {
    string str("ASDAD");
    to_lowercase(str);
    printf("%d %s\n", is_contain_capital("HEllo world"), str.c_str());

    int arr5[5] = { 1, 2, 3, 4, 5 };
    int arr10[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    print_array(std::begin(arr5), std::end(arr5));
    print_array(arr5);

    int var1 = 1;
    int var2 = 2;

    int* ptr1 = &var1;
    int* ptr2 = &var2;

    swap_ptr(ptr1, ptr2);

    printf("%d %d\n", *ptr1, *ptr2); 

    swap_ptr(&ptr1, &ptr2);

    printf("%d %d\n", *ptr1, *ptr2); 

    // fun2(arr5);

    printf("%d\n", fun3({ 1, 2, 3, 4, 5 }));

    return 0;
}