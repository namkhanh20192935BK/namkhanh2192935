#include <iostream>
#include <string>
using namespace std;

template<class T> class Node
{
public:
	T Value;
	Node* Next;
	Node(T v) : Value(v), Next(0) {}
};

template <class T>
class List
{
	Node<T>* head, * tail;
	int count;
public:
	List() : count(0) { head = 0; tail = 0; };
	~List() // Hàm hủy
	{
		delete[]head;
		delete[]tail;
	};

	void RemoveAll() // Hàm xóa danh sách
	{ 
		while (count) {
			--count;
			Node<T>* p = head;
			head = p->Next;
			delete p;
		}
	}

	void Add(T v)   // Hàm bổ sung một node v vào danh sách
	{ 
		Node<T>* p = new Node<T>(v);
		if (count++ == 0) { head = p; }
		else { tail->Next = p; }
		tail = p;
	}

	Node<T>* First() const { return head; } // Hàm lấy ra Node đầu tiên trong danh sách
		int Count() const { return count; } // Hàm tính tổng phần tử Node trong danh sách

	T* ToArray() // Hàm duyệt các Node để lấy ra thuộc tính Value trong danh sách
	{  
		T* arr = new T[count];
		Node<T>* p = head;
		for (int i = 0; i < count; i++)
		{
			arr[i] = p->Value;
			p = p->Next;
		}
		return arr;
	}
};

class person {
private:
	int id;
	string name;
	string gender;
	person* next;
public:
	person(int _id = 0, string _name = "unknow", string _gender = "unknow", person*
		_next = NULL) {
		id = _id;
		name = _name;
		gender = _gender;
		next = _next;
	}
	person(const person& per1) {
		id = per1.id;
		name = per1.name;
		gender = per1.gender;
		next = per1.next;
	}
	~person() 
	{
		next = NULL;
	}
	void input_pers(int& id, string& name, string& gender)
	{
		cout << "nhap ma dinh danh: "; cin >> id;
		cout << "\n nhap ho ten: ";
		cin.ignore(1); getline(cin, name);
		cout << "\n nhap gioi tinh: ";
		getline(cin, gender);
		this->id = id;
		this->name = name;
		this->gender = gender;
	}
	void swap(person& pers2) {
		person tmp = *this;
		*this = pers2;
		pers2 = tmp;
	}
	void display() {
		cout << "Person:\n";
		cout << "ID:\t" << id << endl;
		cout << "Name:\t" << name << endl;
		cout << "Gender:\t" << gender << endl;
	}
};

class student : public person
{
private:
	int stuID;
	string clas;
	student* next;

public:
	student(int _id = 0, string _name = "unknown", string _gender = "unknown", person* _next = NULL, int _stuID = 0, string _clas = "unknown", student* next = NULL) : person(_id, _name, _gender, _next)
	{
		stuID = _stuID;
		clas = _clas;
		this->next = next;
	}
	student(const student& stu1) : person(stu1)
	{
		stuID = stu1.stuID;
		clas = stu1.clas;
	}
	void input_stud(int& id, string& name, string& gender, int& stuID, string& clas)
	{
		person::input_pers(id, name, gender);
		cout << "\n nhap stuID: ";
		cin >> stuID;
		cin.ignore(1);
		cout << "\n nhap ten lop: ";
		getline(cin, clas);
		cout << "\n";
		this->stuID = stuID;
		this->clas = clas;
	}
	void display()
	{
		person::display();
		cout << "student ID:\t" << stuID << endl;
		cout << "Class:\t" << clas << endl;
	}
};



int main()
{
	int id, stuID;
	string name, gender, clas;
	List <student> los;
	student std1(1, "le thi mai", "female", NULL, 1, "ET4");
	student std2(2, "le thi hoa", "female", NULL, 2, "ET4");
	student std3; std3.input_stud(id, name, gender, stuID, clas);
	los.Add(std1);
	los.Add(std2);
	los.Add(std3);
	
	// hàm in danh sách
	Node<student>* p_head = los.First();
	if (p_head != NULL)
	{
		Node<student>* temp = p_head;
		while (p_head != NULL)
		{
			temp->Value.display();
			cout << "\n";
			temp = temp->Next;
		}
	}
	los.~List();
}
