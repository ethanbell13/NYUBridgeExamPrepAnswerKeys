#include <iostream>

using namespace std;

int main() {

     int input, temp_input, sum=0, temp_sum = 1;

     cout << "Please enter a positive integer: ";

     cin >> input;

    temp_input = input;

     //factorial loop

     while (temp_input > 0) {
         int digit = 0;
         temp_sum = 1;

         digit = temp_input % 10;

         for (int x = digit; x > 0; x--){
             temp_sum = temp_sum * x;
         }

         sum += temp_sum;

         temp_input = temp_input / 10;
     }


     if (input == sum) {
         cout << input << " is a factorion.";
     }
     else{
         cout << input << " is not a factorion.";
     }

}
