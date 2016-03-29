#pragma once

const int QUEUE_LENGTH = 10;

template <typename T>
class Lifoqueue
{
public:
	Lifoqueue()
	{
		firstFreeIndex_ = 0;
	}

	bool insert( T &localVar)
	{
		if (!isFull())
		{
			queueArray_[firstFreeIndex_++] = localVar;
			return true;
		}
		return false;
	}

	bool remove( T &localVar )
	{
		if (!isEmpty())
		{
			localVar = queueArray_[--firstFreeIndex_];
			return true;
		}
		return false;
	}

	bool isEmpty() const
	{
		return (firstFreeIndex_ == 0);
	}

	bool isFull() const
	{
		return (firstFreeIndex_ == QUEUE_LENGTH);
	}

	void clear()
	{
		firstFreeIndex_ = 0;
	}

private:
	int firstFreeIndex_;
	T queueArray_[ QUEUE_LENGTH ];
};