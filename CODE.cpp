#include <iostream>
#include <cstdlib>
#include<cmath>
using namespace std;
class calculator
{
	public:
void addition(){
    cout<<"Enter the numbers you want to add: ";
    int a,b;
    cin>>a>>b;
    cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
void subtraction(){
    cout<<"Enter the numbers you want to subtract: ";
    int a,b;
    cin>>a>>b;
    cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}
void multiplication(){
    cout<<"Enter the numbers you want to multipliation: ";
    int a,b;
    cin>>a>>b;
    cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}
void division(){
    cout<<"Enter the numbers you want to divide: ";
    int a,b;
    cin>>a>>b;
    cout<<"The division of "<<a<<" and "<<b<<" is "<<(float)a/(float)b<<endl;
}
void factorial(){
    cout<<"Enter the number you want the factorial of: ";
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
	{
        fact=fact*i;
    }
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;
}
void power()
{
    cout<<"Enter the base and exponent: ";
    double b,e;
    cin>>b>>e;
    double power = pow(b,e);
    cout<<"The solution for base "<<b<<" and exponent "<<e<<" is "<<power<<endl;
}
void square()
{
    cout<<"Enter the number you want the sqaure of: ";
    double b;
    cin>>b;
    double power = pow(b,2);
    cout<<"The square of "<<b<<" is "<<power<<endl;
}
void cube()
{
    cout<<"Enter the number you want the cube of: ";
    double b;
    cin>>b;
    double power = pow(b,3);
    cout<<"The cube of "<<b<<" is "<<power<<endl;
}
void squareroot()
{
    cout<<"Enter the number you want the square root of: ";
    double n;
    cin>>n;
    double squareRoot = sqrt(n);
    cout<<"The Square root of "<<n<<" is "<<squareRoot<<endl;
	
}
void Cos(float x)
{
float c;
c = cos((x*3.14159)/180);
cout<<"COS: "<<c;
}
void Tan(float x)
{
float t;
t = tan((x*3.14159)/180);
cout<<"TAN: "<<t;
}
void Log(float x)
{
float l;
l = log(x);
cout<<"Natural Logarithm: "<<l;
}
void Baselog(float x)
{
float bl;
bl = log10(x);
cout<<"LOG with Base 10: "<<bl;
}
void Sine(float x)
{
float s;
s = sin((x*3.14159)/180);
cout<<"Sin: "<<s;
}
};

int main()
{
	calculator c;
	cout<<  "\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    cout << "\t\t:::::::::::::::::::::::::Welcome to the scientific Calculator::::::::::::::::::::\n";
    cout<<  "\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    
    cout << "\n*******Press 0 to quit the program*******\n"<< endl;
    cout << "[1].Enter 1 for Addition                 [8].Enter 8  for cube \n";
    cout << "[2].Enter 2 for Subtraction              [9].Enter 9 for squareroot\n";
    cout << "[3].Enter 3 for Multiplication           [10].Enter 10 for Sine value\n";
    cout << "[4].Enter 4 for Division                 [11].Enter 11 for Cos value\n";
    cout << "[5].Enter 5 for Power                    [12].Enter 12  for Tan value\n";
    cout << "[6].Enter 6 for Factorial                [13].Enter 13 for Logarithmic value\n";
    cout << "[7].Enter 7  for square                  [14].Enter 14 for Baselog value\n";
    
    
    int choice;
    while (1)
    {
        cout << "\nEnter you choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            c.addition();
            break;
        case 2:
           c.subtraction();
            break;
        case 3:
           c.multiplication();
            break;
        case 4:
            c.division();
            break;
        case 5:
            c.power();
            break;
        case 6:
            c.factorial();
            break;
        case 7:
            c.square();
            break;
        case 8:
            c.cube();
            break;
        case 9:
            c.squareroot();
            break;
            case 10:
            	    cout<<"Enter the angle of sine you want: ";
                float j;
                cin>>j;
                c.Sine(j);
                break;
            case 11:
            	cout<<"Enter the angle of COS you want  : ";
              float n;
             cin>>n;
             c.Cos(n);
             break;
             case 12:
             	cout<<"Enter the angle of Tan you want  : ";
              float i;
             cin>>i;
             c.Tan(i);
             break;
             	case 13:
            	cout<<"Enter the value of Log you want : ";
                float z;
                cin>>z;
                c.Log(z);
                break;
                case 14:
                		cout<<"Enter the value of Base Log you want : ";
                float k;
                cin>>k;
                c.Baselog(k);
                break;
                
                  case 0:
            exit(0);
            break;
        default:
            cout << "\n*******Wrong choice, Enter valid choice*******\n\n";
            break;
        }
    }
    return 0;
}

