#include<iostream>
#include<stdlib.h>
#include<vector>
#include<string>

using namespace std;

std::string customerName = "Juan S. Dela Cruz";
std::string customerAddr1 = "Makati City";
std::string customerMobile1 = "090000000";
std::string retry;
std::string menuSelect;

std::string customerPin = "012000";
std::string inputCustomerPin;
std::string customerAcct = "000005";
std::string inputCustomerAcct;

float truebalance = 10000.00;

void clearScreen(){
  system("cls");
}

void mainHeader()
{
  clearScreen();

  std::cout << "      WELCOME TO     " << endl;
  std::cout << "    AM5 RURAL BANK   " << endl;
  std::cout << "  ATM Online Services" << endl;
  std::cout << endl;

}

void menu()
{
  mainHeader();

  std::cout << "[A]   Account Balance Details" << std::endl;
  std::cout << "[B]   Deposits" << std::endl;
  std::cout << "[C]   Withdrawal" << std::endl;
  std::cout << "[D]   Cash Transfer" << std::endl;
  std::cout << "[E]   Mini Statement" << std::endl;
  std::cout << "[F]   Bills Payment" << std::endl;
  std::cout << "[G]   Mobile Recharge" << std::endl;
  std::cout << "[H]   Account Details Management" << std::endl;
  std::cout << "[Q]   Quit" << std::endl;

}

void security()
{
  mainHeader();

  std::cout << "Enter your Account Number: " << std::endl;
  std::getline(std::cin, inputCustomerAcct);
  std::cout << "Enter your PIN code: " << std::endl;
  std::getline(std::cin, inputCustomerPin);

}

void balance (){

}

void deposit (){

}

void withdrawal(){

}

void transfer (){

}

void statement (){

}

void mobile_recharge (){

}

void changeDetails (){

}

int main()
{

  security();

  if ((inputCustomerAcct == customerAcct) && (inputCustomerPin == customerPin)){
      std::cout << "g";
      menu();
    }
  else if (inputCustomerAcct != customerAcct) {
    std::cout << endl;
    std::cout << "Account does not exist." << endl << endl;
    std::cout << "Do you want to try again [y/n]? ";

    std::cin >> retry;

    if ((retry == "y") || (retry == "Y")){
      security();
    }
    else if ((retry == "n") || (retry == "N")) {
      clearScreen();
    }
  }
  else {
    std::cout << endl;
    std::cout << "Incorrect password." << endl;
  }

  return 0;
}