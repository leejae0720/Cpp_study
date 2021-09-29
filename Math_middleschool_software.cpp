#include <iostream>


//point class
class Point {
    int x;
    int y;

public:
    Point(int pos_x, int pos_y);
};


//Geometry class
class Geometry {
    public:
        Geometry() {
            num_points = 0;
        }

        void AddPoint(const Point &point) {
            point_array[num_points ++] = new Point(point.x, point.y);
        }

        void PrintDistance();

        void PrintNumMeets();

    private:
        Point* point_array[100];
        int num_points;
};

int main() {

}