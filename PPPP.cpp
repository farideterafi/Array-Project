

#include <iostream>
using namespace std;
class arraya {
public:
	int a[5] = { 1,6,3,9,2 };
	int n = 0;
	arraya() {

	}
	void insert(int index, int value) {
		a[index] = value;



	};
	int dbv(int value) {
		n = sizeof(a) / sizeof(a[0]);

		
		int key = value;

		
		for (int i = 0; i < n; i++) {

			
			if (a[i] == key) {
				n = n - 1;
				for (int j = i; j < n; j++)
					a[j] = a[j + 1];
				return i;
				break;
			}
		}

		
		

		

	};
	void dbi(int input) {
		
		int n = sizeof(a) / sizeof(a[0]);
	
		for (int i = 0; i < n; i++) {

			
			if (a[i] == a[input]) {

				
				n = n - 1;
				for (int j = i; j < n; j++)
					a[j] = a[j + 1];
				break;
			}
		}

		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		

	};
	void display() {
		n = sizeof(a) / sizeof(a[0]);
		
		for (int i = 0; i < n; i++) {
			cout << a[i];
		}
	};
	void Append(int value) {
		n = sizeof(a) / sizeof(a[0]);
		n = n + 1;
		a[n - 1] = value;
	};
	void Reverse() {
		
		for (int i=0; i < n; i++) {
			a[i] = a[n - 1 - i];
		}


	};
	int sbv(int value) {
		n = sizeof(a) / sizeof(a[0]);


		int key = value;


		for (int i = 0; i < n; i++) {


			if (a[i] == key) {
				return key;
				break;
			}
		}


	}

	

};


int main()
{
	arraya d;
	//d.insert(0, 100);
	//d.dbv(100);
	//d.Append(43);
	//d.Reverse();
	d.sbv(9);
	d.display();
	



}