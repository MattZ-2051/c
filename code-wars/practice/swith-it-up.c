// this is more clever but not more memory is wasted since the desc array
// pointer is created in memory
char *switchItUp(int number) {

  const char *desc[] = {"Zero", "One", "Two",   "Three", "Four",
                        "Five", "Six", "Seven", "Eight", "Nine"};

  return desc[number];
};

// switch statement is more code but good practice and more performant
char *switchUp(int num) {
  switch (num) {
  case 0:
    return "Zero";
  case 1:
    return "One";
  case 2:
    return "Two";
  case 3:
    return "Three";
  case 4:
    return "Four";
  case 5:
    return "Five";
  case 6:
    return "Six";
  case 7:
    return "Seven";
  case 8:
    return "Eight";
  case 9:
    return "Nine";
  default:
    return "";
  }
}
