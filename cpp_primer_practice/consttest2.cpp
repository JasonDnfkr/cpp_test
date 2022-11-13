#include <string>
#include <iostream>
#include <cstdio>
using namespace std;

const string &get_shorter_str(const string &a, const string &b) {
    return a.size() <= b.size() ? a : b;
}

string fun1(string str) {
    return str + "fun1";
}

string fun2(const string str) {
    printf("fun2 add: %x\n", &str);
    // 构造了一个新的 string
    // 相当于 string ret = str + "fun2"; return ret;
    return str + "fun2";
}

string fun3(const string &str) {
    printf("fun3 add: %x\n", &str);
    return str;
}

const string fun4(string str) {
    return str;
}

string &fun5(string &str) {
    return str;
}

const string &fun6(string& str) {
    return str;
}

const string &fun7(const string& str) {
    return str;
}

void run() {
    string str1 = "test";
    string str11 = "testtest";
    printf("str1 add: %x\n", &str1);
    printf("str11 add: %x\n", &str11);
    string str2 = fun1(str1);
    str2 += "k";
    cout << str1 << " " << str2 << endl;

    cout << "k" + fun1(str1) << endl;

    cout << fun2(str1) << endl;
    cout << fun3(str1) << endl;

    cout << fun4(str1) << endl;
    cout << &fun5(str11) << endl;

    cout << &fun6(str11) << endl;

    string str3 = fun6(str11);

    cout << str3 << " -> add: " << &str3 << endl;

    string str4 = fun7(str11);

    const string str5 = fun5(str11);
    cout << &fun5(str11) << " " << &str5 << endl;


    const string &str6 = fun6(str11);
    cout << &str6 << endl;

    const string &str7 = fun7("fun7str");
    cout << &str7 << endl;
}

int main() {
    run();
    // int a = 5;

    // string str1 = "aa";
    // string str2 = "bbbb";


    // string res = get_shorter_str(str1, str2);

    // cout << res << endl;
    // res += "c";
    // cout << str1 << " " << str2 << " " << res << endl;

    // int var1 = 4;
    // const int &ref1 = var1 + 4;
    // printf("%x %x\n", &var1, &ref1);

    // double var2 = 3.14;
    // const int &ref2 = var2;

    // printf("%d\n", ref2);
    

    return 0;
}