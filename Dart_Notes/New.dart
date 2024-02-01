/*

Explain 'parse' function:
  This function used to convert string to differant data types like int  , double , date and others.
Ok let's to try :
1) Convert 'String' to 'int'.
2) Convert 'String' to 'double'.

*/

void main() {
  String text_one = "454242";

  int n1 = int.parse(text_one);

  print("This is the result of convert String text_one = 454242 to int n1 = $n1\n");

  String text_two = "34.555";

  double n2 = double.parse(text_two);

  print("This is the result of convert String text_two = 34.555 to double n2 = $n2\n");
}
