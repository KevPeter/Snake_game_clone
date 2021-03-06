#include <iostream>
#include <Windows.h>
using namespace std;
//screen dimensions
const int WIDTH = 20;
const int HEIGHT = 20;

enum keyInput { left, right, up, down };
keyInput direction;


class Segment {
	public:
		int x;
		int y;

		Segment* next;
		Segment* prev;

		Segment(int xVal, int yVal){
			x = xVal;
			y = yVal;
			this->next = NULL;
		}
};

class Snake {
	public:
		Segment *head;
		Segment *tail;

		Snake(){
			head = NULL;
			tail = NULL;
		}

		void setHead(Segment *node) {
			head = node;
			tail = node;
		return;
		}

		void insertToTail(Segment *node) {

		}
};

void setup(){
	Snake snake;
	Segment front(WIDTH / 2, HEIGHT / 2);
	snake.setHead(&front);
}

void drawScreen() {

}


int main() {
	bool gameOver = false;
	setup();

	while (!gameOver) {
		drawScreen();
	}

}