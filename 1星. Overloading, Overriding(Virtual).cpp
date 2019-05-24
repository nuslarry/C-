// source: https://www.geeksforgeeks.org/function-overloading-vs-function-overriding-in-cpp/
Function Overloading VS Function Overriding




// 1. Inheritance: 
//         Overriding of functions occurs when one class is inherited from another class. O
//         verloading can occur without inheritance.
         
// 2. Function Signature: 
//         Overloaded functions must differ in function signature ie either number of parameters 
//         or type of parameters should differ. In overriding, function signatures must be same.
         
// 3. Scope of functions: 
//         Overridden functions are in different scopes; whereas overloaded functions are in same scope.
         
// 4. Behavior of functions: 
//         Overriding is needed when derived class function has to do some added or different job than 
//         the base class function. Overloading is used to have same name functions which behave differently 
//         depending upon parameters passed to them.
         
// 5. Function Overloading is achieved at compile time while Function Overriding is achieved at run time.

// CPP program to illustrate 
// Function Overriding 
using namespace std; 
#include <iostream>
class BaseClass 
{ 
public: 
    virtual void Display() 
    { 
        cout << "\nThis is Display() method"
                " of BaseClass"; 
    } 
    void Show() 
    { 
        cout << "\nThis is Show() method "
               "of BaseClass"; 
    } 
}; 
  
class DerivedClass : public BaseClass 
{ 
public: 
    // Overriding method - new working of 
    // base class's display method 
    void Display() 
    { 
        cout << "\nThis is Display() method"
               " of DerivedClass"; 
    } 
}; 
  
// Driver code 
int main() 
{ 
    //achieved at run time
    DerivedClass dr; 
    BaseClass &bs = dr; 
    bs.Display(); 
    dr.Show(); 
} 



// CPP program to illustrate 
// Function Overloading 
#include <iostream> 
using namespace std; 
  
// overloaded functions 
// return type soes not play any role
void test(int); 
void test(float); 
void test(int, float); 
  
int main() 
{ 
    int a = 5; 
    float b = 5.5; 
  
    // Overloaded functions 
    // with different type and 
    // number of parameters 
    test(a); 
    test(b); 
    test(a, b); 
  
    return 0; 
} 
  
// Method 1 
void test(int var) 
{ 
    cout << "Integer number: " << var << endl; 
} 
  
// Method 2 
void test(float var) 
{ 
    cout << "Float number: "<< var << endl; 
} 
  
// Method 3 
void test(int var1, float var2) 
{ 
    cout << "Integer number: " << var1; 
    cout << " and float number:" << var2; 
} 
