#include <iostream>
using namespace std;

class intSet
{
public:
	intSet() : EndPosition(0)
	{
	}
	
	int Element(int idx) const
	{
		return element[idx];	
	}

	int Size() const
	{
		return EndPosition;
	}

	void Empty()
	{
		EndPosition = 0;
	}

	bool IsEmpty() const
	{
		return (EndPosition == 0);
	}

	bool IsMemberOf(int e) const
	{
		for (int i = 0; i < EndPosition; i++)
		{
			if (element[i] == e)
			{
				return true;
			}
		}
		return false;
	}
	
	void Add(int e)
	{
		if (!IsMemberOf(e))
		{
			element[EndPosition] = e;
			EndPosition++;
		}
	}

	void Sub(int e)
	{
		if (IsMemberOf(e))
		{
			bool flag = false;
			for (int i = 0; i < EndPosition; i++)
			{
				if (flag)
				{
					element[i - 1] = element[i];	
				}
				
				if (element[i] == e)
				{
					flag = true;
				}
			}
			EndPosition--;
		}		
	}

	void Print() const
	{
		for (int i = 0; i < EndPosition; i++)
		{
			cout << element[i] << " ";
		}
		cout << endl;
	}
	
	bool IsEqual(const intSet &s) const
	{
		if (this->EndPosition != s.EndPosition)
		{
			return false;
		}
		
		for (int i = 0; i < EndPosition; i++)
		{
			if (!s.IsMemberOf(element[i]))
			{
				return false;
			}
		}
		return true;
	}

	void Intersection(const intSet &s)
	{
		int count = 0, arr[100];
		for (int i = 0; i < EndPosition; i++)
		{
			if (s.IsMemberOf(element[i]))
			{
				arr[count] = element[i];
				count++;
			}
		}
		
		for (int i = 0; i < count; i++)
		{
			element[i] = arr[i];
		}
		EndPosition = count;
	}
	
	void Merge(const intSet &s)
	{
		int size = s.Size();
		for (int i = 0; i < size; i++)
		{
			if (!IsMemberOf(s.Element(i)))
			{
				element[EndPosition] = s.Element(i);
				EndPosition++;
			}
		}
	}

private:
	int element[100];
	int EndPosition;
};

int main()
{
	intSet s1;
	s1.Add(1);
	s1.Add(2);
	s1.Add(1);
	s1.Add(7);
	s1.Add(99);
	s1.Print();
	
	intSet s2;
	s2.Add(7);
	s2.Add(1);
	s2.Add(7);
	s2.Add(2);
	s2.Add(100);
	s2.Print();
	
	cout << s1.IsEqual(s2) << endl;
	
	s1.Merge(s2);
	s1.Print();
	
	cout << "---------------------" << endl;
	s1.Empty();
	s2.Empty();
	
	s1.Add(9);
	s1.Add(3);
	s2.Add(11);
	s2.Add(9);
	s1.Intersection(s2);
	s1.Print();
	
	return 0;
}

