#include "question3.h"

bool is_palindrome(string s) {
   for (int i = 0; i < s.length() / 2; i++) {
       if (s[i] != s[s.length() - i - 1]) {
           return false;
       }
   }
   return true;
}
