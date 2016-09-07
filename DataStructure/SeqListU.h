#include"seqlist.h"
template<class T>
void Union(SeqList<T> &LA, SeqList<T> LB) {
	T x;
	for (int i = 0; i < LB.Length(); i++) {
		LB.Find(i, x);
		if (LA.Search(x) == -1)
			LA.Insert(LA.Length() - 1, x);
	}
}
//public:
//	template<class T>
//	SeqList<T> LA;
//	template<class T>
//	SeqList<T> LB;
