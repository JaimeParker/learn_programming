//
// this file is created by hazyparker on 2022/4/14
// this doc is mainly on code practice from https://leetcode-cn.com/problemset/all/
//

// c++ header
#include <iostream>
#include <string>

// include cpp
#include "src/question1.cc"

// include header


// default namespace
using namespace std;

void main_advanced() {
    string head_name = "question";

    cout << "please choose question number:";
    string question_id;
    cin >> question_id;

    string work_name = head_name + question_id;

#define DEF_TEST(f) if ( work_name == #f ) return f();
    // add all key function here
    DEF_TEST(question1);
}

int main() {
    main_advanced();
    return 0;
}