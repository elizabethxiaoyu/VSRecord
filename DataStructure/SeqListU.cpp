#include"SeqListU.h"
const int SIZE = 20;
void main() {
	SeqList<int>  LA(SIZE);
	SeqList<int>  LB(SIZE);
	for (int i = 0; i < 5; i++) 
		LA.Insert(i-1, i);
	for (int i = 5; i < 10; i++)
		LB.Insert(i - 6, i);
	LB.Insert(-1, 0);
	LB.Insert(LB.Length() - 1, 4);
	Union(LA, LB);
	LA.Output(cout);
}