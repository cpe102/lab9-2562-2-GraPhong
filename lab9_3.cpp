#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int count=0;
	float sum;
	float sum2;
	float mean;
	string textline;
	ifstream source("score.txt");

	while(getline(source,textline)){
		sum += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
		count++;
	}
	

	mean = sum/count;
	cout << "Number of data = "<<count<<"\n";
	cout << "Mean = "<<mean<<"\n";
	cout << "Standard deviation = "<<sqrt((sum2/count)-pow(mean,2));
}
//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
