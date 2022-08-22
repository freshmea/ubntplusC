#ifndef QUEUEH
#define QUEUE_H

class Qu{
	private:
		int *pArr;
		int front;
		int rear;
		int size;
	public:
		Qu(int size);
		~Qu();
		void rearrange();
		void resize();
		void push(int data);
		void pop(int *pData);
};

#endif