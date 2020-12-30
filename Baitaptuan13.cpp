#include <iostream>
#include <string.h>

using namespace std;
class person {
private:
	int id;
	string name;
	string gender;
	person* next;
public :
	person(int _id = 0, string _name = "unknow", string _gender = "unknow", person* _next = NULL) {
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
	void swap(person& per2) {
		person tmp = *this;
		*this = per2;
		per2 = tmp;
	}
	~person() {
		next = NULL; 
	}
	void input_pers(*int& id, string& name, string& gender*) 
		cout << "  + Nhap ma dinh danh :"; cin >> id;
		cout << "  + Nhap ho ten :"; 
		cin.ignore(1); getline(cin, name);
		cout << "  + Nhap gioi tinh:";
		getline(cin, gender);
		id = id;
		name = name;
		gender = gender;
	}
	void input_perss(int& id, string& name, string& gender) {
		id = id;
		name = name;
		gender = gender;
	}
	friend class listofperson;
	void display(){
			cout << "  + ID :" << id << endl;
			cout << "  + Name :" << name << endl;
			cout << "  + Gender:" << gender << endl;
	}
	string getName() {
		return name;
	}

};
class listofperson {
	person* firstpers;
public:
	void lopers_Init(listofperson* lofpers) {
		lofpers->firstpers = 0;
	}
	void add_pers(listofperson* lofpers, int id, string name, string gender) {
		person* newpers = new person;
		newpers->id = id;
		newpers->name = name;
		newpers->gender = gender;
		newpers->next = lofpers->firstpers;
		lofpers->firstpers = newpers;
	}
	void add_pers_Final_input(listofperson* lofpers)
	{
		int id;
		string name; 
		string gender;
		person persIn;
		persIn.input_pers(/*id, name, gender*/); ///sssss
		person* newpers = new person;
		newpers->id = id;
		newpers->name = name;
		newpers->gender = gender;
		person* node = lofpers->firstpers;
		while (node->next != 0) {
			node = node->next;
		}
		newpers->next = node->next;
		node->next = newpers;
	}
	int lofperson_Length(listofperson* lofpers) {
		person* node = lofpers->firstpers;
		int i = 0; 
		while (node != 0)
		{
			i++;
			node = node->next;
		}
		return i;
	}
	void lofpers_Display(listofperson* lofpers) {
		person* node = lofpers->firstpers;
		int i = lofperson_Length(lofpers);
		cout << "\nDo dai cua list:\t" << i;
		if (lofpers->firstpers == 0)
			cout << "\nList rong \n\n";
		else
		{
			while (node != 0) {
				cout << "\nNguoi thu" << i << "\n";
				cout << "\nId:\t\t" << node->id ;
				cout << "\nName:\t\t" << node->name ;
				cout << "\nGender:\t\t" << node->gender << endl;
				node = node->next;
				i--;
			}
			cout << endl;
		}
	}
	person* lofperson_Search(listofperson*lofpers, string name) {
	/*	person* node = lofpers->firstpers;
		int check = 1;
		while (node != 0) {
			if (node->name == name) {
				check = 0;
				break;
			}
			else
				node = node->next;
		}
		if (check)
			cout << "Khong tim thay ten trong node";*/		
			person* node = lofpers->firstpers;	
			while (node != 0) {
			if (node->name == name) {
				return node;
			}
			else
				node = node->next;
		}
				return 0 ;
		
	}
	void lofpers_RemoveAfter(person* node) {
		person* obsoleteNOde = node->next;
		node->next = obsoleteNOde->next;
		delete obsoleteNOde;
	}
	// sap xep theo thu tu tang dan id 
	void sortListPerson(listofperson* lofpers) {
		for (person* node = lofpers->firstpers; node->next != 0; node = node->next) { // for(i=n ; i!=0 ; i--)  .... y hệt
			for (person* node1 = node->next; node1 ->next != 0; node1 = node1->next) {
				if (node->id > node1->id) {
					int temp = node1->id;
					node->id = node1->id;
					node1->id = temp;
				}
			}
		}
	}
};
class student :public person {
private:
	int stuID;
	string clas;
	static int n;
public :
	student() {
		stuID = 0;
		clas = "";
	}
	void set_StuID(int& stuID) {
		this->stuID = stuID;
	}
	void input_stus( int& _stuID, string& _clas)   {
		stuID = _stuID;
		clas = _clas;
	}		
	student(int _id, string _name, string _gender, person* _next, int _stuID, string _clas) 
		:person(_id, _name, _gender, _next) {
		stuID = _stuID;
		clas = _clas;
	}
	student(const student& stu1) :person(stu1) {
		stuID = stu1.stuID;
		clas = stu1.clas;
	}
	student& operator = (const student& stu2) {
		person::operator=(stu2);
		stuID = stu2.stuID;
		clas = stu2.clas;
		return (*this);
	}
	void display() {
		cout << "\n==== Information of list student ====" << endl;
		for (int i = 0; i < n; i++) {
			
			this[i].person::display();
			cout << "  + Student ID:" << this[i].stuID << endl;
			cout << "  + Class:" << this[i].clas << endl;
		}
	}
	void swap(student& stu2) {
		student tmp = *this;
		*this = stu2;
		stu2 = tmp;
	}

	void set_list_Student(int n) {
		this->n = n;
		for (int i= 0; i < n; i++) {
			int _id=0;
			string _name="", _gender="";
			cout << "==== Information of student [" << i + 1 << "] ====" << endl;
			this[i].input_pers(/*_id, _name, _gender*/); 
			cout << "  + StudentId: ";
			cin >> this[i].stuID;
			cin.ignore();
			cout << "  + ClassofStudent: ";
			getline(cin, this[i].clas);
			input_stus(stuID, clas);
		}
	}
	void sort_list_Student_BystuID(int n) {
		cout << "==== Call the sort function with stuID ====" << endl;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (this[i].stuID > this[j].stuID) {
					this[i].swap(this[j]);
				}
			}
		}
	}
	void set_ObjectinList(int n) {
		int stuID_New = 0;
		cout << "==== Call the set function for StuID ====" << endl;
		cout << "  + The position you want to edit:" << n << endl;
		cout << "  + New Information is :"; cin >> stuID_New;
		this[n].set_StuID(stuID_New);
	}
	void delete_Objectinlist(int position  ) {
		cout << "==== Call the deleteObj function ====" << endl;
		cout << "  + The position of object you want to delete:" << position << endl;
		for (int i = position; i < n - 1; i++) {
			this[i] = this[i + 1];
		}
		n--;
	}
	void add_Objecttolist() {
		this->n += 1;
		int _id=0;
		string _name="", _gender="";
		cout << "==== Information of student [" << n << "] ====" << endl;
		this[n-1].input_pers(/*_id, _name, _gender*/);
		cout << "  + StudentId: ";
		cin >> this[n-1].stuID;
		cin.ignore();
		cout << "  + ClassofStudent: ";
		getline(cin, this[n-1].clas);
		input_stus(stuID, clas);
	}
	
};
int main() {
	listofperson lofpers; 
	lofpers.lopers_Init(&lofpers);
	lofpers.add_pers(&lofpers, 1, " Giang", "female");
	lofpers.add_pers(&lofpers, 2, " Tan", "female");
	lofpers.add_pers(&lofpers, 3, " Huy", "female");
	lofpers.add_pers_Final_input(&lofpers);
	lofpers.add_pers_Final_input(&lofpers);
	lofpers.sortListPerson(&lofpers);
	cout << "Noi dung cua list" << endl;
	lofpers.lofpers_Display(&lofpers);
	cout << "Noi dung cua list sau lenh xoa" << endl;
	lofpers.lofpers_RemoveAfter(lofpers.lofperson_Search(&lofpers, " Giang"));
	lofpers.lofpers_Display(&lofpers);
	cout << "=============================================" << endl;
	student* t = new student[6];
	t->set_list_Student(2);
	t->display();
	t->sort_list_Student_BystuID(2);
	t->display();
	t->set_ObjectinList(1);
	t->display();
	t->add_Objecttolist();
	t->display();
	t->delete_Objectinlist(0);
	t->display();
	return 0;
}
int student::n = 0;