#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binaryToDecimal(string binary)
{
     int decimal{};
     size_t length{binary.length()};

     for (int i = 0; i < length; i++)
     {
          if (binary[i] != '0' && binary[i] != '1')
          {
               cout << "Invalid binary number, please try again\n";
               break;
          }
          else
          {
               decimal += (binary[i] - '0') * pow(2, length - 1 - i);
          }
     }
     return decimal;
}

string decimalToBinary(int decimal)
{
     string binary{};
     while (decimal > 0)
     {
          binary.insert(0, to_string(decimal % 2));
          decimal /= 2;
     }
     return binary;
}
string decimalToOctal(int decimal)
{
     string octal{};
     while (decimal > 0)
     {
          octal.insert(0, to_string(decimal % 8));
          decimal /= 8;
     }
     return octal;
}
int octalToDecimal(string octal)
{
     int decimal{};
     size_t length{octal.length()};

     for (int i = 0; i < length; i++)
     {
          if (octal[i] != '0' && octal[i] > '7')
          {
               cout << "Invalid binary number, please try again\n";
               break;
          }
          else
          {
               decimal += (octal[i] - '0') * pow(8, length - 1 - i);
          }
     }
     return decimal;
}

int main()
{
     int option{}, number{};
     string binary;

     cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << '\n'
          << "┃    Conversion System Program     ┃" << '\n'
          << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << '\n';
     cout << "1. Convert Decimal to Binary\n"
          << "2. Convert Binary to Decimal\n"
          << "3. Convert Decimal to octal\n"
          << "4. Convert binary to octal\n"
          << "5. Convert octal to Decimal\n"
          << "6. Convert Binary to Hexadecimal\n"
          << "7. Convert Hexadecimal to Binary\n"
          << "8. Convert Decimal to Hexadecimal\n"
          << "9. Exit\n"
          << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━'\n";
     cin >> option;

     switch (option)
     {
     case 1:
          cin >> number;
          cout << decimalToBinary(number) << '\n';
          break;
     case 2:
          cin >> binary;
          cout << binaryToDecimal(binary) << '\n';
     case 3:
          cin >> number;
          cout << decimalToOctal(number) << '\n';
     case 4:
          cin >> binary;
          cout << octalToDecimal(binary) << '\n';
     default:
          break;
     }
}