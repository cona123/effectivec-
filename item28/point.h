#include<iostream>
#include<memory>
class Point {
    public:
        Point(int x1, int y1):x(x1),y(y1) {
        }
        void SetX(int newval) {
            x = newval;
        }
        void SetY(int newval) {
            y = newval;
        }
        int X() {
            return x;
        }
        int Y() {
            return y;
        }
    private:
        int x;
        int y;
};

struct RectData {
    RectData (const Point& a, const Point& b) : ulhc(a),lrhc(b) {

    }
    Point ulhc;
    Point lrhc;
};

class Rectangle {
public:
    Rectangle (const Point& a, const Point& b) {
        pData = std::make_shared<RectData>(a ,b);

    }
    const Point& upperLeft() const { //if not want user to change
        std::cout<<"upperLeft"<<std::endl;
        std::cout<< pData->lrhc.X()<<std::endl;
        std::cout<< pData->lrhc.Y()<<std::endl;
        std::cout<<"upperLeft end"<<std::endl;

        return pData->lrhc;
    }
    const Point& lowerRight() const {
        std::cout<<"lowerRight"<<std::endl;
        std::cout<< pData->ulhc.X()<<std::endl;
        std::cout<< pData->ulhc.Y()<<std::endl;
        std::cout<<"lowerRight end"<<std::endl;
        return pData->ulhc;
    }
private:
    std::shared_ptr<RectData> pData;
};

