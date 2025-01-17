#pragma once

#include <vector>
#include <string>
using namespace std;

// Smart Vector
// Author: Isaac Fediw
// Date of Creation: 2025-01-17

// This class is a child class of vector and adds 3 useful methods
// To use, simply type #include "SmartVector.h" at the top of your file
// Further instruction on how to use each method can be found below

template <typename T>

class SmartVector : public vector<T> {
public:
	using vector<T>::vector;

	//*********************************************
	//*************** index_of() ******************
	//*********************************************
	// Returns the index of a specified object
	// Parameter --> 
	// T obj: Object you want to find 
	// (Make sure your vector only contains objects of type T)

	int index_of(T obj) {
		for (int i = 0; i < this->size(); i++) {
			if (this->at(i) == obj) return i;
		}

		return -1;
	}


	//*********************************************
	//**************** contains() *****************
	//*********************************************
	// Returns a boolean based on if the vector contains a specified object
	// Parameter -->
	// T obj: Object you want to find

	bool contains(T obj) {
		for (int i = 0; i < this->size(); i++) {
			if (this->at(i) == obj) return true;
		}

		return false;
	}


	//*********************************************
	//**************** contents() *****************
	//*********************************************
	// Returns the contents of a vector in a string
	// Each content is seperated with one space " "

	string contents() {
		string contents = "";

		for (int i = 0; i < this->size(); i++) {
			contents += this->at(i) + " ";
		}

		return contents;
	}
};
