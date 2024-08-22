# exp-4-bitwise-operators
# Aim
To learn about bitwise operators in c++.

# Software Used
VS Code
# Problem Statement
1.) Write a c++ program to do bitwise operation.

2.) Write a c++ program to take a number as input from user along with bit position numbers to be set and reset in the inputted number and perform bitwise logical operations on those numbers.

# Theory
Bitwise Operators are the operators that are used to perform operations on the bit level on the integers. While performing this operation integers are considered as sequences of binary digits. 

# Program Codes

```javascript
//Mudita Songara 
//23070123087

//Bitwise operation
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"a|b: "<<bitset<4>(a|b)<<endl;
    cout<<"a&b: "<<bitset<4>(a&b)<<endl;
    cout<<"a<<b: "<<bitset<4>(a<<b)<<endl;
    cout<<"ab: "<<bitset<4>(a>>b)<<endl;
    cout<<"~b: "<<bitset<4>(~b)<<endl;
    cout<<"a^b: "<<bitset<4>(a^b)<<endl;
    return 0;
}

//Bit Position
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num, set, reset;
    
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to set (0 to 7): ";
    cin >> set;
    cout << "Enter the bit position to reset (0 to 7): ";
    cin >> reset;
    cout<<num<<" in binary is "<<bitset<8>(num)<<endl;
   
    int num_set = num | (1 << set);
    cout << "Result after setting bit number " <<set<< " is " << bitset<8>(num_set) << endl;
    
    int num_reset = num_set & ~(1 << reset);
    cout << "Result after resetting bit number " <<reset<< " is " << bitset<8>(num_reset) << endl;
    return 0;
}

```
# Output

## Bitsat
![Exp4 Bitsat](https://github.com/user-attachments/assets/607ef8e7-7dc8-40fd-b945-e90f501a5a84)
### Bitsat Operator
![Exp 4 bitsat operator](https://github.com/user-attachments/assets/619311bb-31db-4b99-a4c6-0ce5bdc7ba68)


# Conclusion
We learnt to use different bitwise operators in c++.

We learnt to check position of a bit in a number and setting and resetting it.

