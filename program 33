#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char string[] = "This Is A Sentence With 7 Tokens";
	char *tokenPtr;
	
	cout<<"The String To Be Tokenized is: \n"<<string
	<<"\n\nThe Tokens Are: \n";
	
	tokenPtr = strtok(string, " ");
	
	while(tokenPtr != NULL){
		cout << tokenPtr << '\n';
		tokenPtr = strtok(NULL, "");
	}
	return 0;
}
