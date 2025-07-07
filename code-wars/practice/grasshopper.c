// In this game, the hero moves from left to right. The player rolls the die and
// moves the number of spaces indicated by the die two times. Create a function
// for the terminal game that takes the current position of the hero and the
// roll (1-6) and return the new position. Example move(3, 6) should equal 15

unsigned char move(unsigned char pos, unsigned char roll) {
  return pos + 2 * roll;
}

unsigned char moveAssembly(unsigned char pos, unsigned char roll) {
  unsigned char value;
  __asm__("addl %%ebx, %%eax;"
          "addl %%ecx, %%eax;"
          : "=a"(value)
          : "a"(roll), "b"(roll), "c"(pos)); // ?
  return value;
}

#define 🎯 pos + (roll * 2);
unsigned char moveDefined(unsigned char pos, unsigned char roll) { return 🎯; }
