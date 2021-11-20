#include <iostream>
#include <string>
using namespace std;
  
string binary_nonnegative(int n)
{
  if (n <= 0) {
    return "0";
  }
  
  string output;
  while (n > 0) {
       if (n%2 == 1) {
           output = '1' + output;
       } else {
           output = '0' + output;
       }
    n /= 2;
  }
  
  return output;
}

unsigned int decimal_nonnegative(string const& binary){
  unsigned int output(0);
  unsigned int power(1);
  
  if (not binary.empty()) {
    for (size_t i(binary.size() - 1); i < binary.size(); --i) {
      if (binary[i] == '1') {
        output += power;
      }
      power *= 2;
    }
  }
  
  return output;
}

string twos_complement(string const& binary){
  string output(binary); 
  
  if (not binary.empty()) {
  size_t i(output.size() - 1);
    while ((i < output.size()) and (output[i] != '1')) --i;
   --i;
   while (i < output.size()) {
      if (output[i] == '1') {
        output[i] = '0';
      } else {
        output[i] = '1';
      }
      --i;
    }
  }
  
  return output;
}

string binary(int n){
  if (n < 0) {
    return "1" + twos_complement(binary_nonnegative(-n));
  }
  return "0" + binary_nonnegative(n);
}
  
int decimal(string const& binary){
if (not binary.empty() and (binary[0] == '1')) {
    return -decimal_nonnegative(twos_complement(binary));
  }
  
  return decimal_nonnegative(binary);
}
  
void test(int n){
  const string result(binary(n));
  cout << n << " is " << result << endl;
  cout << "and " << result << " is indeed " << decimal(result) << '.' << endl;
}
  
int require_int(){
  int value(0);
  cout << "Enter some integer: ";
  cin >> value;
  return value;
}
  
bool go_ahead() {
  char read('x');
  do {
    cout << "Shall we continue (y/n)? ";
    cin >> read;
  } while ((read != 'y') and (read != 'Y') and
           (read != 'n') and (read != 'N'));
  return (read == 'y') or (read == 'Y');
}
  
int main(){
  const int t(42);
  cout << binary_nonnegative(t) << endl;
  test(t);
  test(-t);
  
  do {
    test(require_int());
  } while (go_ahead());
  
  return 0;
}