#include <iostream>
using namespace std;

int main() {
  cout<<"Please enter a sequence of numbers (with at least 2-digit and at most 8-\n"
  <<"digits), each one in a separate line. End your sequence by typing -1:"<<endl;

  int input, digit_sum;
  int group_1 = 0;
  int group_2 = 0;
  int group_3 = 0;
  int group_4 = 0;
  while (true) {
    cin>>input;
    if (input == -1)
      break;
    
    digit_sum = input % 10;
    input /= 10;
    int rem;
    while (input != 0) {
      rem = input % 10;
      input /= 10;
    }
    digit_sum += rem;

    if (digit_sum < 5)
      group_1++;
    else if (digit_sum >= 5 && digit_sum < 10)
      group_2++;
    else if (digit_sum >= 10 && digit_sum < 15)
      group_3++;
    else if (digit_sum >= 15)
      group_4++;
  }

  cout<<"Total count of numbers in the Numbers Group 1: "<<group_1<<endl;
  cout<<"Total count of numbers in the Numbers Group 2: "<<group_2<<endl;
  cout<<"Total count of numbers in the Numbers Group 3: "<<group_3<<endl;
  cout<<"Total count of numbers in the Numbers Group 4: "<<group_4<<endl;

  return 0;
}
