#include <stdlib.h>
#include <iostream>
#include "BoxClass.h"

using namespace cntainer;

    bool Box::operator==(const Box& object) {
        if (this->length == object.length && this->width == object.width && this->height == object.height
            && this->weight == object.weight && this->value == object.value) return true;
        return false;
    }

     double Box::BoxArray(Box* M, int N) {
        int summ = 0;
        for (int i = 0; i < N; i++) {
            summ +=M[i].value;

        }return summ;
    }
    bool Box::BoxSizeCheck(Box* M, int N, int maxSize) {
        for (int i = 0; i < N; i++) {
            if (M[i].length + M[i].width + M[i].height > maxSize) return false;

        }
        return true;

    }
    double Box::BoxMaxWeight(Box* M, int N, int maxV) {
        double MaxWeight = 0;
        for (int i = 0; i < N; i++) {
            if (M[i].length * M[i].width * M[i].height <= maxV && M[i].weight > MaxWeight) MaxWeight = M[i].weight;
        }
        return MaxWeight;
    }
    bool Box::CheckMatryoshka(Box* M, int N) {
        double* checkSize = new double[N];
        for (int i = 0; i < N; i++) {
            checkSize[i] = M[i].length + M[i].width + M[i].height;
        }

        Box tdm;
        double tmp;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (checkSize[j] > checkSize[j + 1]) {
                    tmp = checkSize[j + 1];
                    checkSize[j + 1] = checkSize[j];
                    checkSize[j] = tmp;
                    tdm = M[j + 1];
                    M[j + 1] = M[j];
                    M[j] = tdm;

                }
            }
        }
        for (int i = 0; i < N - 1; i++) {
            if (M[i].length >= M[i + 1].length || M[i].width >= M[i + 1].width || M[i].height >= M[i + 1].height) { return false; }
        }
        delete[] checkSize;
        return true;

    }
    double Box::getLength() {
        return length;
    }
    double Box::getHeight() {
        return height;
    }
    double Box::getWeight() {
        return weight;
    }
    double Box::getWidth() {
        return width;
    }
    double Box::getValue() {
        return value;
    }




    void Box::SetLength(int N) {
        this->length = N;
    }
    void Box::SetHeight(int N) {
        this->height = N;
    }
    void Box::SetWeight(int N) {
        this->weight = N;
    }
    void Box::SetWidth(int N) {
        this->width = N;
    }
    void Box::SetValue(int N) {
        this->value = N;
    }
     
    namespace cntainer {
        std::ostream& operator <<(std::ostream& os, const Box& object) {
            os << object.length << endl << object.width << endl << object.height << endl << object.weight << endl << object.value;
            return os;
        }



        std::istream& operator >> (std::istream& is, Box& object) {
            return is >> object.length >> object.width >> object.height >> object.weight >> object.value;
        }

    }




            







