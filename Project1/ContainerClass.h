#pragma once
#include <iostream>
#include <vector>
#include "BoxClass.h"
using namespace std;

 namespace cntainer {
	class Container {
	private:
		double width;
		double height;
		double length;
		double MaxWeight;
		double weight = 0;
		int index = -1;
		vector <Box> container;

	public:
		Container(int length, int width, int height, int maxWeight) : length(length), width(width), height(height), MaxWeight(maxWeight) {
			container = {};
		}
		Container() : length(0), width(0), height(0), MaxWeight(0) {
			container = {};
		}

		void push(Box box);


		void pop(Box box) {
			if (index < 0) {
				throw exception("Container is already empty");
			}
			else {
				weight -= box.getWeight();
				container.pop_back();
				index--;
			}

		}
		void erase(int indextime);

		int Length();

		double FindWeight();


		double AllValue();

		Box getBox(int index);


		Box& operator [](int index);


		friend ostream& operator<<(ostream& os, Container& container);

		friend istream& operator >>(istream& is, Container& container);
	};
}