#include <iostream>
#include <string>

#include "src/Question1.cc"

using namespace std;

void chooseQuestion(){
    string head_name = "solution";
    string work_id;
    cout << "Input Question ID";
    cin >> work_id;

    string work_name = head_name + work_id;

    cout << work_name << " in process..." << endl;

#define FUN_CALL(f) if ( work_name == #f ) return f();
    FUN_CALL(solution1);
}

int main() {
    chooseQuestion();
    return 0;
}
