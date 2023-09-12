#include <iostream>
#include <cmath>
using namespace std;
inr main(){
//cmath: 'c'���ƨӦ�c�зǮw�����; 'math'���ƾǱ`�ήw���
//cmath���`�ήw���

//abs(int i):��^ "�㫬1 byte=8 bit"�Ѽ� i������� *absolute
int i=-10; 
cout << i << "������Ȭ�" << abs(i) << endl; //10


//fabs(double x):��^ "����ׯB�I��(double)"�Ѽ� x������� *float
double x= -306.78;
cout << x << "������Ȭ�" << fabs(x) << endl; //306.78


//labs(long n):��^ "���㫬(long)8 byte"�Ѽ� n������� 
long n= -30678;
cout << n << "������Ȭ�" << labs(x) << endl; //30678
//long����Ƹ��j�A�i�H�e�Ǥ� int��j�d�򪺾��


//exp(double a):��^ "���ƨ��" e^a����
double a=0; 
cout << "e��" << a << "����O" << exp(a) << endl; //1
cout << "e��" << a+1 << "����O" << exp(a+1) << endl; //2.71828
cout << "e��" << a+2 << "����O" << exp(a+2) << endl; //7.38906


//log(double b):��^ loge(b)���� (���Ƭ�e�����)
double b=2.7;
cout <<"loge(" << b << ")="<< log(b) << endl; //0.993252


//log10(double c):��^ log10(x)���� (���Ƭ�10�����)
double c=100; 
cout <<"log10(" << c << ")="<< log10(c) << endl; //2


//pow(double d, double e):��^ d^e���� (d������; e������)
double d=2, e=3;
cout << "d^" << e << "���Ȭ�" << pow(d,e) << endl; //8 


//pow10(int p):��^ 10^p���� (10������; p������)
int p=2;
cout << "10^"<< p << "���Ȭ�" << pow(10,p) << endl; //100


//sqrt(double g):��^ ��g���� *square root
double g=25;
cout << g << "������ڬO" << sqrt(g) << endl; //5 


//��^ degree_h�� "�l��" cos(degree_h)�� 
double degree_h=60; 
double radian_h=degree_h*(3.14/180);
cout << degree_h << "���l��cos(x)�O" << cos(radian_h) << endl; //0.50046 
//��^ h�� "�Ͼl��" arccos(h)�ȡAh�O�l���� (cos�c=h) 
double h=cos(radian_h);
cout << h << "���Ͼl��acos(x)�O" << acos(h) << "���סA����" << acos(h)*(180/3.14) << "�סC" << endl;
 

//��^ degree_i�� "����" sin(degree_i)��
double degree_i=30; 
double radian_i=degree_i*(3.14/180);
cout << degree_i << "������sin(x)�O" << sin(radian_i) << endl; //0.49977
//��^ i�� "�ϥ���" arcsin(i)��, i�O������ (sin�c=i)
double i=sin(radian_i); 
cout << i << "���ϥ���asin(x)�O" << asin(i) << "���סA����" << asin(i)*(180/3.14) << "�סC" << endl; 


//��^ degree_j�� "����" tan(degree_j)��
double degree_j=45; 
double radian_j=degree_j*(3.14/180);
cout << degree_j << "������tan(x)�O" << tan(radian_j) << endl; //0.999204
//��^ j�� "�ϥ���" arctan(j)��, j�O������(tan�c=j) 
double j=tan(radian_j); 
cout << j << "���ϥ���atan(x)�O" << atan(j) << "���סA����" << atan(j)*(180/3.14) << "�סC" << endl; 


//hypot(double l, double m): ��^�����T���� "����" ������(k),[k^2= l^2 + m^2] *hypotenuse
double l=3;
double m=4;
double k=hypot(3,4);
cout << "��Ѭ�" << l << "�B" << m << "�������T���α��䬰" << k << endl;  


//ceil(double n): ��^���p�� n���̤p��� = �N�B�I�� "�V�W" �ˤJ��̱��񪺾��(�V�W����) *ceiling
cout << ceil(-2.7) << endl; //-2
//floor(double o): ��^���j�� o���̤j��� = �N�B�I�� "�V�U" �ˤJ��̱��񪺾��(�V�U����)
cout << floor(-2.7) << endl; //-3

#include <cstdlib>
#include <ctime>
//rand(): ���ͤ@���H���ƨê�^�o�Ӽ�
srand(time(NULL)); //srand(): �Ω�]�m�H���ƥͦ����� "�ؤl" ��� *seed 
cout << "�H�����: " << endl;
 

//atof(char *nptr): �N�r�Ŧ� nptr�ഫ�� "�B�I��" or "����ׯB�I��" *ASCII to float
char str[]="3.14"; //�B�I�� 
char str2[]="3.14159265"; //����׼� 
double a=atof(str), b=atof(str2);
cout << a << "," << b << endl; //3.14,3.14159: cout�i��I�_�H�����iŪ�� 
//�Y�r�Ŧ�L�k�ѪR�����Ī��B�I�ơA�h atof ��ƪ�^ 0
 
//atol(char *nptr): �N�r�Ŧ� nptr�ഫ�� "�����" *ASCII to long
char str[]={"12345678911"}; //�Ʀr�Ӫ���X�_�Ǫ��Ʀr? 
long v= atol(str);
cout << v << endl;

//atoi(char *nptr): �N�r�Ŧ� nptr�ഫ���㫬�� *ASCII to integer
char str[]="12345";
int c= atoi(str);
cout << c << endl;


	return 0;
}
