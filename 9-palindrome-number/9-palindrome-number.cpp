#include <iostream>

// cstdlib is needed for atoi()
#include <cstdlib>
#include <string>
class Solution {
public:
bool isPalindrome(int x) {
    bool isPal;
    string num = to_string(x);
    string rev = to_string(x);
    reverse(rev.begin(),rev.end());
   
    return rev==num;
 
}
 
};