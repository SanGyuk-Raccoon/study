#pragma once

template <typename T>
class ListInterface {
public:
	using value_type = T;
	
	virtual ~ListInterface() = default;

	/*
	* index�� element�� �����Ѵ�.
	* index�� ��ȿ���� �ʴٸ�, Error�� �߻��Ѵ�.
	*/
	virtual void insert(int index, T element) = 0;

	/*
	* index�� �ִ� element�� ��ȯ�Ѵ�.
	* index�� ��ȿ���� �ʴٸ�, Error�� �߻��Ѵ�.
	*/
	virtual T get(int index) = 0;

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
	virtual void pushFront(T element) = 0;

	/*
	* �� �ڿ� element�� �߰��Ѵ�.
	*/
	virtual void pushBack(T element) = 0;
};