#include <iostream>
#include <cmath>
#include <random>
#include <chrono>
#include <string>
void trapezoid_area(){
    double b1=0.0, b2=0.0 ,h=0.0;
    std::cout << "Write b1: ";
    std::cin >>b1;
    std::cout << std::endl << "Write b2: ";
    std::cin >>b2;
    std::cout << std::endl << "Write h: ";
    std::cin >>h;
    double A = (h*(b1+b2))/2;
    std::cout << A << std::endl;
};
void circle(){
    std::cout << "Task 2: Calculate the length of the circle and the area of the circle of radius r; "<<std::endl;
    std::cout << "Write r: "<<std::endl;
    double r=0.0;
    std::cin >> r;
    if(r >= 0) {
        double p = M_PI * r * 2;
        double s = M_PI * r * r;
        std::cout << "Length of circle = " << p << std::endl << "Area of circle = " << s;
    }
    else{
        std::cout << "Input Error";
    }
}
void triangle(){
    std::cout << "Task 3: Calculate the area of the triangle and hypotenuse; "<<std::endl;
    std::cout << "Enter the length of the first leg: "<<std::endl;
    double a = 0.0;
    std::cout << "Enter the length of the second leg: "<<std::endl;
    double b = 0.0;
    std::cin>>a>>b;
    double h = 0.0;
    h = sqrt(a*a+b*b);
    if(a+b>h && a+h>b && b+h>a) {
        std::cout << "the area of the triangle=" << (a * b) / 2 << std::endl;
        std::cout << "the hypotenuse of the triangle=" << h << std::endl;
    }
    else
        std::cout << "Error" << std::endl;

}
void counter(){
    std::cout << "Task 4: A four-digit number is given. Find the sum of its digits.; "<<std::endl;
    std::cout << "Enter a four-digit number "<<std::endl;
    int a = 0;
    int sum = 0;
    std::cin >>a;
    if( a > 999 && a < 10000 ) {
        while (a > 0) {
            sum = sum + a % 10;
            a = a / 10;
        }
        std::cout << "Sum = "<<sum<<std::endl;
    }
    else{
        std::cout << "Input Error";
    }
}
void polar(){
    std::cout << "Task 5: Calculate the area of the triangle and hypotenuse; "<<std::endl;
    std::cout << "Enter the coordinat of the point: "<<std::endl;
    double x=0.0,y=0.0;
    char a(248);
    std::cin>>x>>y;
    std::cout << "Polar radius ="<<sqrt(x*x+y*y)<<std::endl;
    std::cout << "Polar angle ="<<atan((y/x))*180.0/M_PI<<a<<std::endl;


}
double dis(double a, double b){
    double x=0.0,y=0.0;
    x=a*cos(b);
    y=a*sin(b);
    return(x,y);
}
int Random3000(){
    std::mt19937 r(std::chrono::steady_clock::now().time_since_epoch().count());
    int a,b;
    a=r() % 9;
    b=r() % 9;
    std::cout << a<<" "<<b<<std::endl;
    int c= a*b;
    return c;
}
void timer(int a){
  int hour=0;
  int min=0;
  hour = a / 3600;
  a = a % 3600;
  min = a / 60;
  a =  a % 60;
  std::cout<<hour<<":"<<min<<":"<<a;
}
void fitness(int a, int b){
    if(a-100 == b)
        std::cout<<"Your weight is perfect.";
    else if(a-100 < b)
        std::cout<<"Your weight is less than ideal.";
    else
        std::cout<<"Your weight is more than ideal";
}
void calendar(int a){

    switch (a){
            case 1:
                std::cout<<"January Winter"<<std::endl;
                break;
            case 2:
                std::cout<<"February Winter"<<std::endl;
                break;
            case 3:
                std::cout<<"March Spring"<<std::endl;
                break;
            case 4:
                std::cout<<"April Spring"<<std::endl;
                break;
            case 5:
                std::cout<<"May Spring"<<std::endl;
                break;
            case 6:
                std::cout<<"June Summer"<<std::endl;
                break;
            case 7:
                std::cout<<"July Summer"<<std::endl;
                break;
            case 8:
                std::cout<<"August Summer"<<std::endl;
                break;
            case 9:
                std::cout<<"September Autumn"<<std::endl;
                break;
            case 10:
                std::cout<<"October Autumn"<<std::endl;
                break;
            case 11:
                std::cout<<"November Autumn"<<std::endl;
                break;
            case 12:
                std::cout<<"December Winter"<<std::endl;
                break;
            default:
                std::cout<<"Error. This is not a month."<<std::endl;
                break;
        }

}
void Happiness(int n){
    if(99999<n && n<1000000) {
        int sum1 = 0;
        int sum2 = 0;
        sum1 = sum1 + n / 100000;
        sum2 = sum2 + n % 10;
        n = n / 10;
        sum1 = sum1 + n / 1000 % 10;
        sum2 = sum2 + n % 10;
        n = n / 10;
        sum1 = sum1 + n / 10 % 10;
        sum2 = sum2 + n % 10;
        if (sum1 == sum2)
            std::cout << "The number is lucky!!!!";
        else
            std::cout << "The number is not lucky.";
    }
    else
        std::cout<<"ERROR";


}
void Coin(int n){

    if(n>20 && n < 100) {
        std::cout<<n;
        n=n%10;
        switch (n) {
            case 0:
                std::cout << " Kopeek";
                break;
            case 1:
                std::cout << " Kopeyka";
                break;
            case 2 ... 4:
                std::cout << " Kopeyki";
                break;

            case 5 ... 9:
                std::cout << " Kopeek";
                break;
        }
    }else
        if(n >-1 && n < 21 ){
            std::cout<<n;
            switch (n) {
                case 0:
                    std::cout << " Kopeek";
                    break;
                    case 1:
                        std::cout << " Kopeyka";
                        break;
                        case 2 ... 4:
                            std::cout << " Kopeyki";
                            break;

                            case 5 ... 20:
                                std::cout  << " Kopeek";
                                break;
            }
        }
        else
            std::cout<<"Error";
}
void checker(int a, int b, int c){
    if(a+b>c && b+c>a && c+a>b){
        if(a==b || b==c || c==a)
            std::cout<<"Triangle is isosceles!";
        else
            std::cout<<"Triangle is not isosceles";
    }
    else
        std::cout<<"This is not a triangle";
}
void checker2(int a,int b){
    if(a>99 && a < 1000) {
        int comp = 1;
        int sum = 0;
        while (a > 0) {
            sum = sum + a % 10;
            comp = comp * a % 10;
            a = a / 10;
        }
        if( comp == b)
            std::cout<<"compilation of numbers = n"<<std::endl;
        else
            std::cout<<"compilation of numbers != n"<<std::endl;
        if( sum % 7 == 0)
            std::cout<<"sum of numbers / 7 "<<std::endl;
        else
            std::cout<<"sum of numbers !/ 7"<<std::endl;
    }
    else
        std::cout<<"Error"<<std::endl;


}
double sale(double p){
    if(p>1000)
        p=0.9*p;
    return p;
}
double sale2(double a, int b){
    switch(b){
        case 1 ... 5:
            return (a);
        case 6 ... 7:
            return (a*0.8);
        default:
            std::cout<<"Error. This is not a day.";
            return 0;
    }
}
void equation(int a, int b, int c){
    double x1= 0.0, x2 =0.0;
    int d = 0;
    d= b*b - 4*a*c;
    if (d>0){
        std::cout<<"x1="<<((-b)+ sqrt(d))/(2*a)<<std::endl;
        std::cout<<"x1="<<((-b)- sqrt(d))/(2*a)<<std::endl;
    }else if(d == 0)
        std::cout<<"x1,2="<<((-b))/(2*a)<<std::endl;
    else
        std::cout<<"The roots of the equation do not exist"<<std::endl;
}
void Pal(int n){
    if(n > 999 && n < 10000){
        int a=0,b=0,c=0,d=0;
        a=n/1000;
        b=n/100%10;
        c=n%100/10;
        d=n%10;
        if(a==d && b==c)
            std::cout<<"The number is pal";
        else
            std::cout<<"The number is not pal";
    }
    else
        std::cout<<"Error";
}
void Analyzer(){
   int a;
    std::cout<<"int="<<sizeof(a)<<std::endl;
   double b;
    std::cout<<"double="<<sizeof(b)<<std::endl;
   float c;
    std::cout<<"float="<<sizeof(c)<<std::endl;
   char d;
    std::cout<<"char="<<sizeof(d)<<std::endl;
   bool e;
    std::cout<<"bool="<<sizeof(e)<<std::endl;
    wchar_t t;
    std::cout<<"wchar_t="<<sizeof(t)<<std::endl;
    long long l;
    std::cout<<"long long="<<sizeof(l)<<std::endl;
}


int main() {
    std::cout<<"Choose a number of task:"<<std::endl;
    int a = 0;
    std::cin>>a;
    switch (a) {
        case 1:
            trapezoid_area();
            break;
        case 2:
            circle();
            break;
        case 3:
            triangle();
            break;


        case 4:
            counter();
            break;

        case 5:
            polar();
            break;
        case 6: {
            std::cout<<"Task 6."<<std::endl;
            std::cout<<"Write a polar coordinate."<<std::endl;
            double a = 0.0, b = 0.0;
            std::cin >> a >> b;
            std::cout << dis(a, b);
        }
            break;
        case 7:{
            std::cout<<"Task 7."<<std::endl;
            int a=0,b=0,c=0;
            std::cout<<"Write 3 coefficients."<<std::endl;
            std::cin>>a>>b>>c;
            equation(a,b,c);
        }
            break;
        case 8:{
            std::cout<<"Task 8."<<std::endl;
            std::cout<<"I didn't have time to solve the problem.Sorry=("<<std::endl;
        }
            break;
        case 9: {
            std::cout<<"Task 9."<<std::endl;
            std::cout<<"Write seconds."<<std::endl;
            int sec = 0;
            std::cin >> sec;
            timer(sec);
        }
            break;
        case 10:{
            std::cout<<"Task 10."<<std::endl;
            int a=0,b=0,c=0;
            std::cout<<"Write 3 sides of the triangle."<<std::endl;
            std::cin>>a>>b>>c;
            checker(a,b,c);
        }
            break;
        case 11:{
            std::cout<<"Task 11."<<std::endl;
            double p=0.0;
            std::cout<<"Write a price."<<std::endl;
            std::cin>>p;
            std::cout<<"The price is ";
            std::cout<<sale(p);
        }
            break;
        case 12:{
            std::cout<<"Task 12."<<std::endl;
            int h=0,w=0;
            std::cout<<"Write your height and weight."<<std::endl;
            std::cin>>h>>w;
            fitness(h,w);
        }
            break;

        case 13: {
            int c = 0;
            int f = Random3000();
            std::cin >> c;
            if (f == c)
                std::cout << "Correct!";
            else
                std::cout << "NOOOOOOOOOO";}

            break;

        case 14: {
            std::cout<<"Task 14."<<std::endl;
            std::cout<<"Write a day and a duration of the conversation."<<std::endl;
            int d = 0;
            double h = 0.0;
            std::cin >> d >> h;
            std::cout<<"let's denote one hour of meating for x"<<std::endl;
            std::cout<<sale2(h,d)<<"x";
        }

            break;

        case 15 :{
            std::cout<<"Task 15."<<std::endl;
            int m=0;
            std::cout<<"Write a month."<<std::endl;
            std::cin>>m;
            calendar(m);
        }
            break;
        case 16 :{
            std::cout<<"Task 16."<<std::endl;
            int n=0;
            std::cout<<"Write a number."<<std::endl;
            std::cin>>n;
            Happiness(n);
        }
            break;
        case 17 :{

            std::cout<<"Task 17."<<std::endl;
            int n=0;
            std::cout<<"Write a number."<<std::endl;
            std::cin>>n;

            Coin(n);
        }
            break;

        case 18 :{
            std::cout<<"Task 18."<<std::endl;
            int n=0;
            std::cout<<"Write a number."<<std::endl;
            std::cin>>n;
            Pal(n);
        }
            break;
        case 19 :{
            std::cout<<"Task 19."<<std::endl;
            int n=0,b=0;
            std::cout<<"Write a number n and a number b."<<std::endl;
            std::cin>>n>>b;
            checker2(n,b);
        }
            break;
        case 20 :{
            std::cout<<"Task 20."<<std::endl;
            int n=0;
            std::cout<<"I didn't have time to solve the problem.Sorry=("<<std::endl;

        }
            break;

        case 21 :{
            std::cout<<"Task 21."<<std::endl;
            Analyzer();
        }
            break;

    }

    return 0;
}
