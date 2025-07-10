// In this Kata, you will be given a string and your task will be to return
// the length of the longest prefix that is also a suffix. A prefix is the start
// of a string while the suffix is the end of the string. For instanc, the
// prefixes ["abcd"] are ["a", "ab", "abc"] the suffixes are ["bcd", "cd", "d"]
// you should not overlap the prefix and suffix
// EX:
// solved("abcd") = 0
// solved("abcda") = 1
// solved("abcdabc") = 3

#include <string.h>

unsigned prefix_length(const char *s) {
  // setting a var len equal to length of s and
  // a var n equal to half the len var
  int len = strlen(s), n = len / 2;

  while (strncmp(s, &s[len - n], n) != 0)
    n--;
  return n;
}
