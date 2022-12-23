#include <iostream>
#include <cmath>
using namespace std;
{	void sum(float v1,float v2){
		cout<<"sum="<<v1<<"+"<<v2<<"="<<v1+v2;
	}void diff(float v1,float v2){
		cout<< "difference="<<v1<<"-"<<v2<<"="<<v1-v2;
	}void prod(float v1,float v2){
		cout<< "product="<<v1<<"*"<<v2<<"="<<v1*v2;
	}void div(float v1,float v2){
		cout<< "division="<<v1<<"/"<<v2<<"="<<v1/v2;
	}void sqrt(float v1,float v2){
		cout<< "square root="<<v1<<"sqrt"<<v2<<"="<<sqrt(v1*v2);
	}void log(float v1,float v2){
		cout<< "logarithm="<<v1<<"ln"<<v2<<"="<<log(v1*v2);
	}void sqr(float v1){
		cout<< "square="<<v1<<"*"<<v1<<"="<<v1*v1;}}
int  main(){
	float  n1,n2;
	cout<<"enter 1st numbers ="<<endl;
	cin>>n1;
	cout<<"enter 2nd numbers ="<<endl;
	cin>>n2;
	{
	sum(n1,n2);
	cout<<endl;
	prod(n1,n2);
	cout<<endl;
	diff(n1,n2);
	cout<<endl;
	div(n1,n2);
	cout<<endl;
	sqrt(n1,n2);
	cout<<endl;
	log(n1,n2);
	cout<<endl;
	sqr(n1);}return 0;}
