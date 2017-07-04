#include <iostream>
using namespace std;


struct mystruct{
	char res[255];
};

struct mystruct match()
{
	char gene[255] = {};
	cin.getline(gene, 255);
	struct mystruct bar;
	for (int i = 0; i < 255; i++){
		if (gene[i] == 'A'){
			bar.res[i] = 'T';
		}
		else if (gene[i] == 'T'){
			bar.res[i] = 'A';
		}
		else if (gene[i] == 'C'){
			bar.res[i] = 'G';
		}
		else if (gene[i] == 'G'){
			bar.res[i] = 'C';
		}
		else{
			bar.res[i] = '\0';
		}
	}
	
	return bar;
}

int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i <= n; i++){
		struct mystruct foo;
		foo = match();
		cout << foo.res << endl;
	}
	
	return 0;
}
