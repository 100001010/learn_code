#include <iostream>
#include <cmath>
using namespace std;
inr main(){
//cmath: 'c'ㄧ计ㄓc夹非畐ㄧ计; 'math'计厩盽ノ畐ㄧ计
//cmathい盽ノ畐ㄧ计

//abs(int i): "俱1 byte=8 bit"把计 i荡癸 *absolute
int i=-10; 
cout << i << "荡癸" << abs(i) << endl; //10


//fabs(double x): "蛮弘疊翴计(double)"把计 x荡癸 *float
double x= -306.78;
cout << x << "荡癸" << fabs(x) << endl; //306.78


//labs(long n): "俱(long)8 byte"把计 n荡癸 
long n= -30678;
cout << n << "荡癸" << labs(x) << endl; //30678
//long计耕甧ゑ int絛瞅俱计


//exp(double a): "计ㄧ计" e^a
double a=0; 
cout << "e" << a << "Ωよ琌" << exp(a) << endl; //1
cout << "e" << a+1 << "Ωよ琌" << exp(a+1) << endl; //2.71828
cout << "e" << a+2 << "Ωよ琌" << exp(a+2) << endl; //7.38906


//log(double b): loge(b) (┏计e癸计)
double b=2.7;
cout <<"loge(" << b << ")="<< log(b) << endl; //0.993252


//log10(double c): log10(x) (┏计10癸计)
double c=100; 
cout <<"log10(" << c << ")="<< log10(c) << endl; //2


//pow(double d, double e): d^e (d┏计; e计)
double d=2, e=3;
cout << "d^" << e << "" << pow(d,e) << endl; //8 


//pow10(int p): 10^p (10┏计; p计)
int p=2;
cout << "10^"<< p << "" << pow(10,p) << endl; //100


//sqrt(double g): ≡g *square root
double g=25;
cout << g << "キよ琌" << sqrt(g) << endl; //5 


// degree_h "緇┒" cos(degree_h) 
double degree_h=60; 
double radian_h=degree_h*(3.14/180);
cout << degree_h << "緇┒cos(x)琌" << cos(radian_h) << endl; //0.50046 
// h "は緇┒" arccos(h)h琌緇┒ (cos=h) 
double h=cos(radian_h);
cout << h << "は緇┒acos(x)琌" << acos(h) << "┓单" << acos(h)*(180/3.14) << "" << endl;
 

// degree_i "タ┒" sin(degree_i)
double degree_i=30; 
double radian_i=degree_i*(3.14/180);
cout << degree_i << "タ┒sin(x)琌" << sin(radian_i) << endl; //0.49977
// i "はタ┒" arcsin(i), i琌タ┒ (sin=i)
double i=sin(radian_i); 
cout << i << "はタ┒asin(x)琌" << asin(i) << "┓单" << asin(i)*(180/3.14) << "" << endl; 


// degree_j "タち" tan(degree_j)
double degree_j=45; 
double radian_j=degree_j*(3.14/180);
cout << degree_j << "タちtan(x)琌" << tan(radian_j) << endl; //0.999204
// j "はタち" arctan(j), j琌タち(tan=j) 
double j=tan(radian_j); 
cout << j << "はタちatan(x)琌" << atan(j) << "┓单" << atan(j)*(180/3.14) << "" << endl; 


//hypot(double l, double m): àà "弊娩" (k),[k^2= l^2 + m^2] *hypotenuse
double l=3;
double m=4;
double k=hypot(3,4);
cout << "ㄢ" << l << "" << m << "àà弊娩" << k << endl;  


//ceil(double n): ぃ n程俱计 = 盢疊翴计 "" 彼程钡俱计(俱) *ceiling
cout << ceil(-2.7) << endl; //-2
//floor(double o): ぃ o程俱计 = 盢疊翴计 "" 彼程钡俱计(俱)
cout << floor(-2.7) << endl; //-3

#include <cstdlib>
#include <ctime>
//rand(): 玻ネ繦诀计硂计
srand(time(NULL)); //srand(): ノ砞竚繦诀计ネΘ竟 "贺" ㄧ计 *seed 
cout << "繦诀俱计: " << endl;
 

//atof(char *nptr): 盢才﹃ nptr锣传Θ "疊翴计" or "蛮弘疊翴计" *ASCII to float
char str[]="3.14"; //疊翴计 
char str2[]="3.14159265"; //蛮弘计 
double a=atof(str), b=atof(str2);
cout << a << "," << b << endl; //3.14,3.14159: cout秈︽篒耞矗蔼弄┦ 
//璝才﹃礚猭秆猂Τ疊翴计玥 atof ㄧ计 0
 
//atol(char *nptr): 盢才﹃ nptr锣传Θ "俱计" *ASCII to long
char str[]={"12345678911"}; //计び块┣计? 
long v= atol(str);
cout << v << endl;

//atoi(char *nptr): 盢才﹃ nptr锣传Θ俱计 *ASCII to integer
char str[]="12345";
int c= atoi(str);
cout << c << endl;


	return 0;
}
