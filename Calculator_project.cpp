#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
const double pi = 3.14 ;
using namespace std ;
class arithmetic{
    public:
    int a , b;
    void inputDetails(){
        cout<<"Enter your first number : ";
        cin>>a;
        cout<<"Enter your second number : ";
        cin>>b;
    }
    void inputOneValue(){
        cout<<"Enter the value : ";
        cin>>a;
    }
    void addition(){
    int c = 0 ;
    c = a + b;
    cout<<"The addition of the two numbers are as : "<<c;
}
void subtraction(){
    int c = 0 ;
    if(a>b){
        c = a - b;
        cout<<"The subtraction of the numbers is as : "<<c;
    }
    else{
        int c = 0;
        c = b - a;
        cout<<"The subtraction of the numbers is as: "<<c;
    }
}
void multiplication(){
    int c = 0 ;
    c = a * b;
    cout<<"The multiplication of the numbers is as : "<<c;
}

void division(){
    int c = 0;
    if(b!=0){
    c = a/b;
    cout<<"The division of the numbers is as : "<<c;
    }
    else{
    cout<<"Error ! denominator cant be 0 ";
    }
}

void exponential(){
    int c = 0;
    c = pow(a,b);
    cout<<"The exponential of the numbers is as : "<<c;

}
void degreetoRadian(){
    float c = a * (pi/180.0);
    cout<<a<<" degree is "<<c<<" Radians";
}
void RadiantoDegree(){
    float c = a * (180.0/pi);
    cout<<a<<" Radians is "<<c<<"degree ";
}
void decimaltoBinary(){
    vector<int> binary;
    int c = 0;
    while(a > 0){
        c = a%2;
        a = a/2;
        binary.push_back(c);
    }
    cout<<a<<" can also be represented as : ";
    for(int i = binary.size()-1 ; i>=0 ; i--){
        cout<<binary[i];
    }
}
void decimaltoOctal(){
    std::cout << "The octal representation of " << a << " is: " << std::oct << a ;
}
void decimaltoHexadecimal(){
    std::cout << "The hexadecimal representation of " << a << " is: " << std::hex << a ;;
}
};

class ComplexArithmetic{
    public:
    int real_1,real_2,imaginary_1,imaginary_2;

    void InputComplexValue(){
        cout<<"Enter your first real part : ";
        cin>>real_1;
        cout<<"Enter your second real part : ";
        cin>>real_2;
        cout<<"Enter your second imaginary part : ";
        cin>>imaginary_1;
        cout<<"Enter your second imaginary part : ";
        cin>>imaginary_2;
    }

    void ComplexAddition(){
        cout<<"The addition of the two complex numbers is as : "<<(real_1 + real_2)<<" + "<<(imaginary_1+imaginary_2)<<"i";
    }
    
    void ComplexSubtraction(){
      cout<<"The addition of the two complex numbers is as : "<<(real_1 - real_2)<<" +  "<<(imaginary_1 - imaginary_2)<<"i";  
    }

    void ComplexMultiplication(){
        cout<<"The Mulitplication of the two complex numbers is as : "<<(real_1*real_2 - imaginary_1*imaginary_2)<<" + "<<(imaginary_1*real_2+imaginary_2*real_1)<<"i";
    }
    void ComplexDivision(){
        float c =((real_1*real_2)+(imaginary_1*imaginary_2))/(pow(real_2,2) + pow(imaginary_2,2));
        float d =((imaginary_1*real_2)-(real_1*imaginary_2))/(pow(real_2,2) + pow(imaginary_2,2));
        cout<<"The division of the two complex numbers is as : "<<c<<" + "<<d<<"i";
    }

};
int main(){
    arithmetic app;
    ComplexArithmetic comp;
    int choice = 0;
    bool repetition = true;
    string another_choice = " ";
    while(repetition){
    cout<<"\n\n\n";
    cout<<"Please select your choice : "<<"\n";
    cout<<"Basic Operations              Conversions                             "<<"\n";
    cout<<"1) Addition       :           6)Degree to Radian          :           "<<"\n";
    cout<<"2) Subtraction    :           7)Radian to Degree          :           "<<"\n";
    cout<<"3) Multiplication :           8)Decimal to Binary         :           "<<"\n";
    cout<<"4) Division       :           9)Decimal to Octal          :           "<<"\n";
    cout<<"5) Exponential    :           10)Decimal to Hexadecimal   :           "<<"\n";
    
    cout<<""<<"\n";
    cout<<"Complex Number Operations  "<<"\n";
    cout<<"11)Complex Addition        : "<<"\n";
    cout<<"12)Complex Subtraction     : "<<"\n";
    cout<<"13)Complex Multiplication  : "<<"\n";
    cout<<"14)Complex Division        : "<<"\n";
    cout<<"\n\n";
    cout<<"Enter your choice : ";
    cin>>choice;
    if(choice == 1){
        app.inputDetails();
        app.addition();
    }
    else if(choice == 2){
        app.inputDetails();
        app.subtraction();
    }
    else if(choice == 3){
        app.inputDetails();
        app.multiplication();
    }
    else if(choice == 4){
        app.inputDetails();
        app.division();
    }
    else if(choice == 5){
        app.inputDetails();
        app.exponential();
    }
    else if(choice == 6){
        app.inputOneValue();
        app.degreetoRadian();
    }
    else if(choice == 7){
        app.inputOneValue();
        app.RadiantoDegree();
    }
    else if(choice == 8){
        app.inputOneValue();
        app.decimaltoBinary();
    }
    else if(choice == 9){
        app.inputOneValue();
        app.decimaltoOctal();
    }
    else if(choice == 10){
        app.inputOneValue();
        app.decimaltoHexadecimal();
    }
    else if(choice == 11){
        comp.InputComplexValue();
        comp.ComplexAddition();
    }
    else if(choice == 12){
        comp.InputComplexValue();
        comp.ComplexSubtraction();
    }
    else if(choice == 13){
        comp.InputComplexValue();
        comp.ComplexMultiplication();
    }
    else if(choice == 14){
        comp.InputComplexValue();
        comp.ComplexDivision();
    }
    else{
        cout<<"Sorry wrong choice ";
    }
    cout<<"\n";
    cout<<"Do you want to perform more operations  : ";
    cin>>another_choice;
    if(another_choice == "yes"){
        repetition = true;
    }
    else{
        cout<<"Thank you for using the calculator "<<"\n";
        cout<<"We wish to see u again : ";
        repetition = false;
        }
    }
    return 0;

}