#include <iostream> 
#include <stdlib.h>    
#include <fstream>
#include <string>
using namespace std;
void changeFileName(string fileName); 
 main(){
 	system("dir /A:a /b > name.log");
	ifstream namefile;
	namefile.open("name.log");
	cout << "reading  the file" << endl;
	string list;
  	while(!namefile.eof()){
	 
			getline(namefile,list,'\n'); 
			if(list.find("AVI")!=string::npos){
				changeFileName(list);
				 
			}
			   
  			
	}
	 	
}
	void changeFileName(string fileName){
		int stringSize=fileName.length();
		if(stringSize==12){
		string newFileName=	fileName.substr(4);
			cout <<"rename " << fileName <<" to "<< newFileName<< endl;	
			string shellCommand="ren "+fileName+" "+ newFileName;
			const char *shellCommandChar = shellCommand.c_str();
			system(shellCommandChar);
			
		}
			 
			 	
	} 

