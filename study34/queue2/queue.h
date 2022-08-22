#ifndef QUEUE_H
#define QUEUE_H

class Qu{
	private:
		int *pArr_;
		int front_;
		int rear_;
		int size_;
		static const int QUEUE_SIZE;
	public:
		explicit Qu(int size = QUEUE_SIZE);
		~Qu();

		Qu(const Qu& rhs);
		Qu& operator=(const Qu& rhs);

		bool operator==(const Qu& rhs) const;

		// void rearrange();
		// void resize();
		void push(int data);
		int pop();
		bool full() const;
		bool empty() const;
};

#endif