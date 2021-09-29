#include <iostream>
#include <cmath>
// Point 지정 Class
class Point {
	int x, y;

public:
	Point(int pos_x, int pos_y) {
		x = pos_x;
		y = pos_y;
	}

	int GetX() { return x; }
	int GetX() const { return x; } 
	int GetY() { return y; }
	int GetY() const { return y; }
};

//Geometry 지정 Class
class Geometry {
	Point* point_array[100];	// 점 100개를 보관하는 배열
	int num_points;
public:
	Geometry() {
		num_points = 0;
	}

	void AddPoint(const Point& point) {
		point_array[num_points++] = new Point(point.GetX(), point.GetY());
	}

	// 모든 점들 간의 거리를 출력하는 함수입니다.
	void PrintDistance();

	// 모든 점들을 잇는 직선들 간의 교점의 수를 출력해주는 함수입니다.
	void PrintNumMeets();

	// point1과 point2를 잇는 직선의 방정식에 insert를 집어넣은 값 출력
	int InsertLineToPoint(const Point* point1, const Point* point2, const Point* insert);
};

void Geometry::PrintDistance() {
	for (int i = 0; i < num_points-1; i++) {
		for (int j = i + 1; j < num_points; j++) {
			std::cout << i + 1 << " is num1 point " << j + 1 << " is num2 point and distance "
				<< sqrt(pow(point_array[i]->GetX() - point_array[j]->GetX(), 2)+ pow(point_array[i]->GetY() - point_array[j]->GetY(), 2))
				 << std::endl;      // 두점의 거리 표시 하기
		}
	}
}

int Geometry::InsertLineToPoint(const Point* point1, const Point* point2, const Point* insert) {
	return (point1->GetX() - point2->GetX()) * (insert->GetX() - point1->GetX()) - (point1->GetY() - point2->GetY()) * (insert->GetY() - point1->GetY());
}

void Geometry::PrintNumMeets() {
	int cnt = 0;

	if (num_points <= 3) {
		std::cout << "not exist cnt" << std::endl;
		return;
	}
		

	for (int i = 0; i < num_points - 3; i++) {
		for (int j = i + 1; j < num_points-2; j++) {
			for (int k = j + 1; k < num_points - 1; k++) {
				for (int l = k + 1; l < num_points; l++) {
					if (InsertLineToPoint(point_array[i], point_array[j], point_array[k]) * InsertLineToPoint(point_array[i], point_array[j], point_array[l]) <= 0)
						cnt++;
				}
			}
		}
	}

	std::cout << "cnt: " << cnt << std::endl;       //교점의 총 갯수
}


int main() {
	// 테스트
	Point pos1(1, 2), pos2(3, 1), pos3(-1, -4), pos4(5,2);
	Geometry Geo;
	Geo.AddPoint(pos1);
	Geo.AddPoint(pos2);
	Geo.AddPoint(pos3);
	Geo.AddPoint(pos4);

	Geo.PrintDistance();
	Geo.PrintNumMeets();

	return 0;
}