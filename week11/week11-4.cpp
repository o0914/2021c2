#include <iostream>
#include <vector>
#include <algorithm>
class Student{
public:
	char name[30];
	int grade;
};
bool cmp(Student a,Student b)
{
	return a.grade > b.grade;
}
using namespace std ;
int main()
{
	int N;
	cin >>N;
	vector<Student>stu(N);
	for(int i=0;i<N;i++)
	{
		cin >> stu[i].name >> stu[i].grade;
	}
	stable_sort(stu.begin(),stu.end(),cmp);
	for(int i=0;i<N;i++)
	{
		cout << stu[i].name << " " << stu[i].grade << endl;
	}
}
