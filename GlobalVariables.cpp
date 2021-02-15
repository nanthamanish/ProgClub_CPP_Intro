#include<iostream> 
using namespace std; 

int age2 = 5; 

void display() 
{ 
	cout<< "Age is " << age2 <<endl; 
} 

int main() 
{ 
	display();
	age2 = 10;
	display(); 
} 
