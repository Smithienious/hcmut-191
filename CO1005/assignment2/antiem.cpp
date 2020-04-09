//============================================================================
// Name        : antiem.cpp
// Author      : 
// Version     : 
// Copyright   : Your copyright notice
// Description : assignment 2
// Created on  : 
//============================================================================

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

/******************************************************************************
 * Support Functions: these functions below are optional. If you want your code
					  to be clearer, you can implement them. However if you
					  dont know how to use funtion in programming, dont worry,
					  you dont have to implement them, and you just add a comment
					  in each of them.
*******************************************************************************/
bool isPrimeNumber(int n) {
	int x = ceil(sqrt(n)); bool check = true; int i = 2;
	while (i <= x && check) {
		check = !(n % i == 0);
		i++;
	}
	return check;
}
bool isFibonacci(int n) {
	int F0, F1, F2; bool check = false;
	F0 = 0;F1 = 1;F2 = 1;
	while (F2 <= n && !check) {
		check = (n == F2);
		F2 = F1 + F0;
		F0 = F1;
		F1 = F2;
	}
	return check;
}
float TriangleNumber(int n) {
	bool check = false; int i = 2; int x = 1;
	while (i <= n && !check) {
		check = (x == n);
		x += i;
		i++;
	}
	return x;
}

/**********************************************************************
 * Input & output for program: these function below are neccessary. You
							   have to finish the function display()
**********************************************************************/
bool readFile(int& hp, int& d, int& s) {
	char* file_name = "input.txt";
	ifstream in;
	in.open(file_name);
	in >> hp;
	in >> d;
	in >> s;
	in.close();

	if (hp < 1 || hp > 999) return false;
	if (d < 1 || d > 1000) return false;
	if (s < 1 || s > 100) return false;

	return true;
}
void display(float pR) {
	//Set pR = 0 if pR < 0 and set pR = 1 if pR > 1
	//Remember to round 3 decimal places for pR
	if (pR < 0) { pR = 0; }
	else if (pR > 1) { pR = 1; }
	else {
		pR = round(pR * 1000) / 1000;
	}
	cout << pR;
}

/**********************************************************************
 * My program
**********************************************************************/
int main() {

	//Declare variables
	int hp = 0;
	int d = 0;
	int s = 0;
	float P1 = 0;	//store value of P1
	float P2 = 0;	//store value of P2
	float f = 0;	//store value of f(d,s)
	float pR = -1; //No valid

	//Input data
	if (readFile(hp, d, s)) {
		/*Calculate P1 & P2
		Rememeber to check if hp is a prime number*/
		if (isPrimeNumber(hp)) {
			P1 = 1000;
			P2 = (hp + s) % 1000;
		}
		else {
			P1 = hp;
			P2 = (hp + d) % 100;
		}


		/*---------------------------------
			Calculate f(d,s)
			Remember to check if d+s is a number of Fibonaci sequence
		*/
		if (d < 200 && !isFibonacci(d + s)) { f = 0.0; }
		if ((d >= 200 && d <= 800) || (d <= 200 && isFibonacci(d + s))) {
			float g;
			switch (s % 6) {
			case 1:
				g = 2 * s;
				break;
			case 2:
				g = -(s % 9) * (s % 9) * (s % 9) / 5;
				break;
			case 3:
				g = -(s % 30) * (s % 30) + 3 * s;
				break;
			case 4:
				g = -s;
				break;
			case 5:
				g = -TriangleNumber((s % 5) + 5);
				break;
			default:
				g = s / 2;
				break;
			}
			f = 40.0 - abs(d - 500.0) / 20.0 + g;
		}
		if (d > 800) { f = -d * s / 1000; }


		/*---------------------------------
			Calculate p(R)
			Remember to check if the probability of being bitten by snakes > 0.8
		*/
		if ((d >= 200 && d <= 300) && ((d + P1 + P2) / 1000 > 0.8)) { pR = 0; }
		else pR = (P1 + P2 * f) / (1000 + abs(P2 * f));
	}
	//Output result
	display(pR);
}
