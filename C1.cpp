#include<iostream>
#include<string.h>
#define MAX 5

using namespace std;

int top=-1;
char stack[MAX];
char x;

void push(){
cout<<"Masukkan satu karakter : ";
cin>>x;
top++;
stack[top]=x;
if (top < MAX)
{
stack[top] = x;
}
else
{
cout<< "Stack Penuh, Push Nilai Tidak Dapat Dilakukan"<<endl;
}
}
void pop(){
if (top<0){
cout<<"stack kosong "<<endl;
return;
}
x=stack[top];
top--;
cout<<"Karakter dihapus dari stack"<<endl;
}

void cetak(){
if(top<0){
cout<<"stack kosong "<<endl;



return;
}

int i=0;
for(i=top; i>=0; i--)
cout<<stack[i]<<endl;
}
int main(){
int input;
cout<<"Menu Pilihan "<<endl;
cout<<"1.Push "<<endl;
cout<<"2.Pop "<<endl;
cout<<"3.Cetak "<<endl;
cout<<"4.Quit "<<endl;
while(true){
cout<<"\nMasukkan Pilihan : ";cin>>input;
if (input==1){
push();
}else if (input==2){
pop ();
}else if (input==3){
cetak();
}else if (input==4){
break;
}else{
cout<<"perintah "<<input<<"tidak dikenal"<<endl;
}
}
}
