
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num, set, reset;
    // Input the number and bit positions to set and reset
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to set (0 to 7): ";
    cin >> set;
    cout << "Enter the bit position to reset (0 to 7): ";
    cin >> reset;
    // Display the original number in binary
    cout<<num<<" in binary is "<<bitset<8>(num)<<endl;
    // Set the bit at set_pos
    int num_set = num | (1 << set);
    cout << "Result after setting bit number " <<set<< " is " << bitset<8>(num_set) << endl;
    // Reset the bit at reset_pos
    int num_reset = num_set & ~(1 << reset);
    cout << "Result after resetting bit number " <<reset<< " is " << bitset<8>(num_reset) << endl;
    return 0;
}
