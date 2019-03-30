//Необходимо найти "почти-палиндромы"

//Будем считать "почти-палиндромом" такой палиндром, симметрия в котором нарушена не более чем в одном символе. Например:
//acbaa - "почти-палиндром", aabbaa - палиндром , acbeq - не палиндром и не "почти-палиндром".
//


//Входные данные:
//На вход программе сначала подается число N (натуральное).
//Затем следует N непустых строк.


//Выходные данные:
//Программа должна вывести все введенные палиндромы и "почти-палиндромы".


//Example:
//Input:
//5
//Adam aba acbaa abba qwerty

//Output
//aba acbaa abba


#include <iostream>     
#include <string>
#include <cmath>

using namespace std;

void FindX(int A, int B, int C)
{
	if (A != 0){

		int D = (B*B) - (4 * A*C);

		if (D < 0) {

			cout << "there are no any square roots" << endl;
		}
		else if (D == 0) {

			float X = -B / (2 * A);
			cout << "X = " << X << endl;
		}
		else {

			float X1 = (-B + sqrt(D)) / (2 * A);
			float X2 = (-B - sqrt(D)) / (2 * A);
			cout << "X1 = " << X1 << "; X2 = " << X2 << endl;
		}
	}
	else{

		float X = -C / B;
		cout << "X = " << X << endl;
	}
	
}
