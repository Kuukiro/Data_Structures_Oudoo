#pragma once

typedef int ElemType;

class SqList
{
public:
	int* data;
	int length;

	// 初始化和打印方法
	bool Init_SqList(int* data, int length);
	void PrintList();

	// P18_01
	bool Del_Min(SqList& L, ElemType &e);
	// P18_02
	void Reverse(SqList& L);
	// P18_03
	void Del_Value(SqList& L, ElemType x);
	// P18_04
	bool Del_Seq(SqList& L, ElemType s, ElemType t);
	// P18_05
	bool Del_Seq_NoSort(SqList& L, ElemType s, ElemType t);
};

