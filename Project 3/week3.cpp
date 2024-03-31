#include <iostream>
#include <string>

using namespace std;
char opp;
string userInput;
float num1, num2;





void CalulatorCommands() {

	

};





int main() {



	char userAnswer;


	bool ProperInput = false;



	do {

		while (!ProperInput) {
			cout << "Please enter first number, operator, & second number (separated by spaces): ";
			cin >> num1 >> opp >> num2;


			ProperInput = true;

		}
		switch (opp) {
		case '+':

			cout << "Answer = " << num1 + num2;

			break;

		case '-':
			cout << "Answer = " << num1 - num2;

			break;

		case '/':
			cout << "Answer = " << num1 / num2;
			break;

		case '*':

			cout << "Answer = " << num1 * num2;

			break;


		}



		cout << " \ Would you like to perform another calculation? (y/n): ";
		cin >> userAnswer;
		cin.ignore();
		ProperInput = false;




		} while (userAnswer == 'y');


		cout << "Thank you for using the calculator program.";
		cout << "\n Goodbye.";








		cin.ignore();
		cin.get();

		return 0;

	}



