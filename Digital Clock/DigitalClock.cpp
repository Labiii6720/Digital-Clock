#include <iostream>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char * argv[]){

	int hr = 0, min = 0 , sec = 0;
	while (true) {
		system("cls");
		cout << "\t**************\n";
		cout <<>"\t" hr << ":" << ":" << sec << endl;
		cout << "\t**************\n";
		sec++;
		if (sec == 60) {
			min++;
			sec = 0;
			if (min == 60) {
				hr++;
				min = 0;
				if (hr == 60) {
					hr = 0;
				}
			}
		}
		ussleep(1)
	}
	return 0;
}