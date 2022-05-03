#include <stdlib.h>
#include <iostream>
#include "ContainerClass.h"
using namespace std;
using namespace cntainer;
	void Container::push(Box box) {
		this->weight += box.getWeight();
		if (weight > MaxWeight) {
			this->weight -= box.getWeight();
			throw exception("Max weight reached limit");
		}
		else {
			container.push_back(box);
			index++;
		}
	}

	void Container::erase(int indextime) {
		container.erase(container.begin() + indextime);
		weight -= container[indextime].getWeight();
		index--;
		
	}

	int Container::Length() {
		return index + 1;
	}

	double Container::FindWeight() {
		double mass = 0;
		for (int i = 0; i < Length(); i++) {
			mass += container[i].getWeight();
		}
		return mass;
	}

	double Container::AllValue() {
		double summ = 0;
		for (int i = 0; i < Length(); i++) {
			summ += container[i].getValue();
		}
		return summ;
	}
	Box Container::getBox(int index) {
		if (index < 0 || index > this->index) throw exception("Wrong index");
		return container[index];
	}

	Box& Container::operator [](int index) {
		if (index < 0 || index > this->index) throw exception("Wrond index");
		return container[index];
	}
	namespace cntainer {
		ostream& operator<<(ostream& os, Container& container) {
			os << "Параметры контейнера" <<container.width << " " << container.length << " " << container.height << " " << container.weight << endl;
			for (int i = 0; i < container.Length(); i++) {
				os << "Коробка " << i << endl;
				os << container[i].getLength() << " " << container[i].getHeight() << " " << container[i].getWidth() << " " << container[i].getValue() << " " << container[i].getWeight() << endl;
			}
			return os;
		}

		istream& operator >>(istream& is, Container& container) {

			return is >> container.width >> container.height >> container.length >> container.MaxWeight;

		}
	}


