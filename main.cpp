#include <iostream>
using namespace std;

void fizz_Buzz(int end_value, int count_by, int fizz_num, int buzz_num){
    for (int i = 1; i <= end_value; i += count_by) {
        if (i % fizz_num == 0 && i % buzz_num == 0) {
            cout << "FizzBuzz" << ", ";
        }
        else if (i % fizz_num == 0) {
            cout << "Fizz" << ", ";
        }
        else if (i % buzz_num == 0) {
            cout << "Buzz" << ", ";
        }
        else {
            cout << i << ", ";
        }
    }
}



int main() {
    fizz_Buzz(100,1,3,5);
    fizz_Buzz(500,2,7,11);
}
