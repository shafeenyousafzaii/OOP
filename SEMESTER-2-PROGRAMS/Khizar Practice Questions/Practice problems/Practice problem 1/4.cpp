#include<iostream> 
#include <math.h> 
using namespace std; 

// Function to calculate the length of the square to be cut
// to maximize the volume of the box
double calculateSquareLength(double length, double width) 
{ 
	return (2 * sqrt(length * width)) / 4; 
} 

// Function to calculate the maximum volume of the box
double calculateMaxVolume(double length, double width, 
							double sqLength) 
{ 
	return (length - 2 * sqLength) * 
		(width - 2 * sqLength) * sqLength; 
} 

// Main function 
int main() 
{ 
	double area, length, width, sqLength; 
	
	// Prompts the user to enter the area of the flat cardboard 
	cout << "Enter the area of the flat cardboard: "; 
	cin >> area; 
	
	// Calculates the length and width of the cardboard 
	length = sqrt(area); 
	width = length; 
	
	// Calculates the length of the square to be cut
	sqLength = calculateSquareLength(length, width); 
	
	// Calculates the maximum volume of the box 
	double maximumVolume = calculateMaxVolume(length, width, sqLength); 
	
	// Outputs the length, width and the side of the square to be cut
	cout << "The length and width of the cardboard are: " << length << " " << width << endl; 
	cout << "The length of the square to be cut from each corner: " << sqLength << endl; 
	cout << "The maximum volume of the box is: " << maximumVolume << endl; 
	
	return 0; 
}