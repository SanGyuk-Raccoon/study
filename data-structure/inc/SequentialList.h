#pragma once

#include "interface/ListInterface.h"

template <typename T>
class SequentialList : public ListInterface<T> {
public:
	/*
	* ������ : Class�� ó�� ������ �� ������
	* - Python: __init__()
	*/
	SequentialList() {}

	/*
	* �Ҹ��� : Class�� ������ �� ������
	* - Python: __del__()
	*/
	~SequentialList() override {}

	/*
	* index�� element�� �����Ѵ�.
	* index�� ��ȿ���� �ʴٸ�, Error�� �߻��Ѵ�.
	*/
	virtual void insert(int index, T element) = 0;

	/*
	* index�� �ִ� element�� ��ȯ�Ѵ�.
	* index�� ��ȿ���� �ʴٸ�, Error�� �߻��Ѵ�.
	*/
	virtual T get(int index) override = 0;

	/*
	* index�� �ִ� element�� ��ȯ�ϰ� �����Ѵ�.
	* index�� ��ȿ���� �ʴٸ�, Error�� �߻��Ѵ�.
	*/
	virtual T pop(int index) = 0;

	/*
	* ��� ���Ҹ� �����Ѵ�.
	*/
	virtual void clear() = 0;

	/*
	* index�� �ִ� ���Ҹ� element�� �����Ѵ�.
	* index�� ��ȿ���� �ʴٸ�, Error�� �߻��Ѵ�.
	*/
	virtual void set(int index, T element) = 0;

	/*
	* ���� ������ ��ȯ�Ѵ�.
	*/
	virtual int length() = 0;

	/*
	* ���� ������ ��ȯ�Ѵ�.
	*/
	virtual bool isEmpty() = 0;

	/*
	* element�� ù��°�� ������ ������ index�� ��ȯ�Ѵ�.
	*/
	virtual int find(T element) = 0;

	/*
	* �� �տ� element�� �߰��Ѵ�.
	*/
	virtual int pushFront(T element) = 0;

	/*
	* �� �ڿ� element�� �߰��Ѵ�.
	*/
	virtual int pushBack(T element) = 0;

private:
};