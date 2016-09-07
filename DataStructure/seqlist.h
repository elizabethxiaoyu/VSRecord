#include"LinearList.h"
template <class T>
class SeqList:public LinearList<T> {
public:
	SeqList(int mSize);
	SeqList() {
		delete[]elements;
	}
	bool IsEmpty()const;
	int Length()const;
	bool Find(int i, T& x)const;
	int Search(T x) const;
	bool Insert(int i, T x);
	bool Delete(int i);
	bool Update(int i, T x);
	void Output(ostream &out)const;
public:
	int maxLength;
	T* elements;
};

template<class T>
SeqList<T>::SeqList(int mSize)
{
	maxLength = mSize;
	elements = new T[maxLength];// 动态分配顺序表的存储空间
	n = 0;
}

template<class T>
 bool SeqList<T>::IsEmpty() const
{
	return n == 0;
}

 template<class T>
 int SeqList<T>::Length() const
 {
	 return n;
 }

 template<class T>
  bool SeqList<T>::Find(int i, T & x) const
 {
	  if (i< 0 || i> n - 1) {
		  cout << "Out Of Bounds" << endl;
		  return false;
	}
	  x = elements[i];
	  return true;
 }

  template<class T>
  int SeqList<T>::Search(T x) const
  {
	  for (intj = 0; j < n; j++) 
		  if (elements[j] == x) 
			  return j;
	  return -1;
  }

  template<class T>
  bool SeqList<T>::Insert(int i, T x)
  {
	  if (i < -1 || i> n - 1) {
		  cout << "Out Of Bounds" << endl;
		  return false;
	  }
	  if (n == maxLength) {
		  cout << "OverFlow" << endl;
		  return false;
	  }
	  for (int j = n - 1; j > i; j--)
		  elements[j + 1] = elements[j];//从后往前逐个后移元素,腾出i+1后的位子
	  elements[i+1] = x;
	  n++;
	  return true;
  }

  template<class T>
  bool SeqList<T>::Delete(int i)
  {
	 if (!n) {
		  cout << "UnderFlow" << endl;
		  return false;
	 }
	  if (i <0 || i>n - 1) {
		  cout << "Out Of Bounds" << endl;
		  return false;
	  }
	  for (int j = i + 1; j < n; j++) {
		  elements[j - 1] = elements[j];
	  }
	  n--;
	  return true;
  }

  template<class T>
  bool SeqList<T>::Update(int i, T x)
  {
	  if (i <0 || i>n - 1) {
		  cout << "Out Of Bounds" << endl;
		  return false;
	  }
	  elements[i] = x;
	  return true;
  }

  template<class T>
  void SeqList<T>::Output(ostream & out) const
  {
	  for (int i = 0; i < n; i++)
		  out << elements[i] << ' ';
	  out << endl;
  }
