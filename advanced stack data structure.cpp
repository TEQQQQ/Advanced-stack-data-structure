#include<iostream>
using namespace std;
class stack{
	private:
		int top;
		int arr[5];
	public:
		stack(){
			top = -1;
			int i;
			for(i = 0; i<5;i++){
				arr[i] = 0;
			}
		}
		
		bool bosmu();
		bool dolumu();
		int size();
		void push(int x);
		void pop();
		void listele();
		void change(int x , int y);
	
};

bool stack::bosmu(){
	if(top==-1){
		return true;
	} else {
		return false;
	}
	
}

bool stack::dolumu(){
	if(top==4){
		return true;
	} else {
		return false;
	}
}

int stack::size(){
	cout<<"stackin boyutu: "<<top+1<<endl;
	
	
}


void stack::push(int x){
	if(dolumu()){
		cout<<"stack dolu"<<endl;
	} else {
		top++;
		arr[top] = x;
	}
}

void stack::pop(){
	if(bosmu()){
		cout<<"stack bos "<<endl;
	} else {
		arr[top] = 0;
		top--;
	}
}

void stack::listele(){
	int i;
	for(i = 0; i< 5; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void stack::change(int x, int y){
	if(0<x<6){
		arr[x-1] = y;
		cout<<"islem tamamlandý"<<endl;
		
	} else {
		cout<<"gecerli bir islem gir"<<endl;
	}
	
	
}

int main(){
	stack stack;
	int option, data, sira;
	
	do{
		cout<<"islemler::"<<endl; // these are the processes
	cout<<"1:ekleme"<<endl;
	cout<<"2:cikarma"<<endl;
	cout<<"3:bosmu"<<endl;
	cout<<"4:dolumu"<<endl;
	cout<<"5:listele"<<endl;
	cout<<"6:update"<<endl;
	cout<<"7:size"<<endl;
	cout<<"yapmak istedigin islemi gir"<<endl;
	cin>>option;
	
	switch(option){
		case 1 :
			cout<<"eklenecek sayiyi girin:"<<endl;
			cin>>data;
			stack.push(data);
		break;
		
		case 2:
			cout<<"Cikarma islemi tamamlandi"<<endl;
			stack.pop();
		break;
		
		case 3:
			cout<<"bosmu kontrolü yapildi"<<endl;
			stack.bosmu();
		break;
		
		case 4:
			cout<<"dolumu kontrolü yapildi"<<endl;
			stack.dolumu();
		break;
		
		case 5:
			cout<<"listeleniyor"<<endl;
			stack.listele();
		break;
		
		case 6:
			cout<<"güncellenecek sayinin önce sira numarasini sonra ise datasini giriniz"<<endl;
			cin>>sira;
			cin>>data;
			stack.change(sira,data);
		break;
		
		case 7:
			cout<<"stack yapisinin eleman sayisi:"<<endl;
			stack.size();
		break;
		
		default:
			cout<<"gecerli islem gir"<<endl;
		break;
	}
		
	}while(option!=0);
	
	
	
	
}
