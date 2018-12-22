#include "Header.h"
#include "Admin.h"
#include "Reader.h"
#include "Book.h"
#include "Seller.h"
#include"Bookstore.h"

#include <vector>
#include <list>
#include <deque>
#include <set>
#include <multiset>
#include <map>
#include <multimap>
#include <stack>
#include <queue>
#include<algorithm>

using namespace std;
int i = 0;
void SalaryNew(Admin admin);//13 перевантаженння
void SalaryNew(Admin* &admin);//14
int Admin::salary;
int Admin::premium;
int Admin::wallet;
int Book::object_count;
int main() {
	setlocale(LC_ALL, "Ukrainian");


	Human* ptr = new Seller;
	ptr->who_is_this_man;
	delete ptr;
	ptr = new Admin;
	ptr->who_is_this_man;
	delete ptr;

	Admin admin("John", "Mcgill", "Young admin", 456783, 5000, 24, 650);
	Seller seller;
	Human*ptr;
	ptr = &admin;
	ptr->who_is_this_man;
	ptr = &seller;
	ptr->who_is_this_man;
	delete ptr;

	Reader reader("Walter", "White", 1111, 2000, 1234, 24);

	Admin*ptr = &admin;
	ptr->who_is_this_man;
	ptr = (Admin*)&reader;
	ptr->who_is_this_man;
	bool active = true;
	Human* human = new Admin;//робота віртуального деструктора 3
	delete human;
	Human*man;
	man = new Admin;//10 пізнє зв'язування
	man->funcs();
	delete man;
	Human*funcс;
	funcс = new Admin;//10 раннє зв'язування
	funcс->GetName();
	delete funcс;



	//vector
	vector <Admin> a(10);
	vector <Admin> a2(5);
	vector<Admin>::iterator first;//ітератор input
	for (first = a.begin(); first != a.end(); ++first){
		cout << first->name << " ";
	}

	vector<Admin>::iterator i1; // ітератор forward
	for (i1 = a.begin(); i1 != a.end(); ++i1) {
		i1->SetPremium(500); // input 
		cout << i1->GetPremium << endl; //output
	}

	vector<Admin>::iterator i1; // ітератор bidirectional
	for (i1 = a.end(); i1 != a.begin(); --i1)
	{
		if (i1 != a.end())
		{
			cout << i1->name << " ";
		}
	}


	// Алгоритми порівняння
	equal(a.begin(), a.end(), a2.begin());
	min_element(a.begin(), a.end());
	max_element(a.begin(), a.end());
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());

	// ітератори random acceses
	vector<Admin>::iterator i1;
	vector<Admin>::iterator i2;
	i1 = a.begin();
	i2 = a.end();

	if (i1 < i2)
	{
		cout << "Yes";
	}
	int count = i2 - i1;
	cout << "\ncount = " << count;
	//


	
	cout << "Розмір" << a.size()<< endl;
	a.pop_back();
	for (i = 0; i < 10; i++)
	if (!a.empty){
		cout << "Вектор пустий" << endl;
	}
	//list
	list<Seller> b(10);
	copy(b.begin(),b.end(),ostream_iterator<int>(cout,""));//ітератор output
	b.push_back;
	b.remove;

	//deque
	Admin *admin = new Admin("John", "Mcgill", "Young admin", 456783, 5000, 24, 650);
	deque<Admin> c(5);
	c.begin();
	c.end();
	cout << "Розмір" << c.size << endl;
	c.push_front(admin);
	c.push_back(admin);
	
	
	//set
	set<Admin> sell;
	sell.insert(admin);
	sell.clear;
	if (!sell.empty){
		cout << "Вектор пустий" << endl;
	}
	cout << sell.max_size << endl;
	
	
	//multiset 
	multiset<Admin> ad;
	ad.emplace(admin);
	ad.insert(admin);
	cout << ad.rbegin << endl;
	
	//map
	map<Admin, int> d;
	d.at(admin)=5;
	d.insert(pair<Admin,int>(admin,7));
	d.clear();

	//multimap
	multimap<Admin,char> aa;
	aa.insert(pair<Admin, char>(admin, 'ff'));
	aa.begin();
	aa.clear();

	//stack
	stack<Admin> bb;
	bb.push(admin);
	bb.pop();
	if (!bb.empty())
		cout << bb.size() << endl;

	//queue
	queue <Admin> m;
	m.push(admin);
	m.pop();
	if (!m.empty()){ cout<<"Елемент існує"<<endl; }

	//priority queue
	priority_queue<Admin> v;
	v.push(admin);
	v.pop();
	v.size();


	while (active) {
		int choose = 0;
		cout << "Авторизація:\nАдмін - введіть 1\nКористувач - введіть 2" << endl;;
		try{
			Admin *admin = new Admin("John", "Mcgill", "Young admin", 456783, 5000, 24, 650);
			if (admin == NULL){
				throw(Admin::admin_creating());
			}
			admin->Business_card();
			admin->funcs();
			admin->Human::funcs();//11
			Seller *seller=new Seller("ManagerName", "ManagerSurname", 27, 123456);
			seller->cardnumber = 1000;
			/*	Admin *p = &admin;*/



			Admin::SetWallet(0);
			cin >> choose;
			if (choose == 1) {
				choose = 0;
				cout << "Введіть кількість книг, які хочете додати\n";
				int count;
				cin >> count;
				for (; i < count; i++){
					admin->AddBook("Ritchi", "C++", 2114, 89, 1999, i);
				}

			}
			else if (choose == 2) {
				Reader *reader = new Reader("Walter", "White", 1111, 2000, 1234, 24);
				if (reader == NULL){
					throw(Reader::reader_creating());
				}
				cout << "Що ви хочите: \nЗнайти книгу за назвою, введіть 1\nВибрати книгу зі списку, натисність 2" << endl;

				cin >> choose;
				if (choose == 1){
					choose = 0;
					//Book *books = new Book[i];//item 6 //item 7 //item 11
					string title;
					cout << "Введіть назву" << endl;
					cin >> title;
					Book book = reader->FindBook(*admin, i, title); //item 8 //item 10
					Bookstore bookstore(admin, reader, seller, book, "Book", "234stdr", 5, 9, 3467, 3, 7);
					Bookstore bookstore1(admin, reader, seller, book, "Book1", "234stdr11", 4, 6, 346, 5, 8);

					bookstore++;
					bookstore1--;
					int add = bookstore + bookstore1;
					int subtraction = bookstore - bookstore1;
					int multiply = bookstore - bookstore1;
					bookstore = bookstore1;
					bookstore += bookstore1;
					bookstore -= bookstore1;
					bookstore[1];
					cout << bookstore.Max(bookstore.getLevel(), bookstore1.getLevel()) << endl;
				}
				else if (choose == 2){
					choose = 0;
					Book *books = new Book[i];//item 6// item 7
					if (books == NULL){
						throw(Book::book_creating());
						
					}
					cout << "Count of added books " << Book::ObjectCount() << endl;//8
					reader->FindBook(books, *admin, i);
					for (int j = 0; j < i; j++){
						cout << "Number: " << j << endl;
						books[j].ShowBook();
					}
					cout << "Please, enter number of book what want" << endl;
					int number;
					cin >> number;
					if (number>i || number < 0){
						cout << "Wrong number" << endl;
					}
					else{
						reader->MakeOrder(books[number], *admin);
						delete reader;
						throw(Reader::reader_deleting());
						delete[] books;
						throw(Book::book_deleting());
						delete admin;
						throw(Admin::admin_deleting());
					}

				}
			}
			else{
				char response;
				cout << "Чи сподобалось вам обслуговування?";
				cin >> response;
				if (response == 'yes'){
					cout << "Зарплата з премією складатиме";
					SalaryNew(admin);//13-14
				}
				cout << "Вихід";
				active = false;
			}
		}

		catch (Admin::admin_creating){//5
			cout << "Admin wasn`t added!" << endl;
		}
		catch (Reader::reader_creating){
			cout << "Reader wasn`t added!" << endl;
		}
		catch (Book::book_creating){
			cout << "Book wasn`t added!" << endl;
		}
		catch (Admin::admin_deleting){//5
			cout << "Admin wasn`t deleted!" << endl;
		}
		catch (Reader::reader_deleting){
			cout << "Reader wasn`t deleted!" << endl;
		}
		catch (Book::book_deleting){
			cout << "Book wasn`t deleted!" << endl;
		}
	}

	getchar();
	getchar();
	return 0;
}
void SalaryNew(Admin  admin){//13
	cout << "Admin receives a salary " << admin.getSalary() + admin.GetPremium() << endl;
}

void SalaryNew(Admin* &admin){//14
	cout << "Admin receives a salary " << admin->getSalary() + admin->GetPremium() << endl;
}