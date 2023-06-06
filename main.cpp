#include <iostream>
#include <stdlib.h>
using namespace std;


int calculo(int num1, int num2, int calcOperador, int &aux){
	int resultado;
	switch(calcOperador){
	case '+':
	resultado = num1 + num2;
	break;
	case '-':
	resultado = num1 - num2;
	break;
	case '*':
	resultado = num1 * num2;
	break;
	case '/':
	resultado = num1 / num2;
	break;
	default:
	aux = 0;
	return 0;
    }
    aux = 1;
	return resultado;
}
