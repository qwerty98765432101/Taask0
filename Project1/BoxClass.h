#pragma once
#include <iostream>
using namespace std;
namespace cntainer {
    class Box
    {
    private:
        int length;
        int width;
        int height;
        double weight;
        int value;
    public:
        Box(int length, int width, int height, double weight, int value) {
            this->length = length;
            this->width = width;
            this->height = height;
            this->weight = weight;
            this->value = value;

        }
        Box() : length(0), width(0), height(0), weight(0), value(0) {}

        static double BoxArray(Box* M, int N);

        static bool BoxSizeCheck(Box* M, int N, int maxSize);

        static double BoxMaxWeight(Box* M, int N, int maxV);

        static bool CheckMatryoshka(Box* M, int N);

        double getLength();

        double getHeight();

        double getWeight();

        double getWidth();

        double getValue();

        void SetHeight(int N);

        void SetLength(int N);

        void SetWeight(int N);

        void SetWidth(int N);

        void SetValue(int N);

       

        friend std::ostream& operator <<(std::ostream& os, const Box& object);


        friend std::istream& operator >> (std::istream& is, Box& object);

        bool operator==(const Box& object);

    };
}




    