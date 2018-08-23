<<<<<<< HEAD
#include <iostream>  
using namespace std;  
void swap(int,int);  
void swap2(int*, int*);
void swap3(int&, int&);

int main()  
{  
    int a = 3, b = 4;  
    cout << "a = " << a << ", b = "  
    << b << endl;  
    swap(a,b);  
    cout << "a = " << a << ", b = "  
    << b << endl;
    swap2(&a,&b);  
    cout << "a = " << a << ", b = "  
    << b << endl;
    swap3(a,b);  
    cout << "a = " << a << ", b = "  
    << b << endl;
    return 0;  
}  
void swap(int x, int y)  
{  
     int t = x;  
     x = y;  
     y = t;  
} 
void swap2(int *x,int *y)  
{  
     int t = *x;  
     *x = *y;  
     *y = t;  
} 
void swap3(int &x,int &y)  
{  
     int t = x;  
     x = y;  
     y = t;  
=======
#include <iostream>  
using namespace std;  
void swap(int,int);  
void swap2(int*, int*);
void swap3(int&, int&);

int main()  
{  
    int a = 3, b = 4;  
    cout << "a = " << a << ", b = "  
    << b << endl;  
    swap(a,b);  
    cout << "a = " << a << ", b = "  
    << b << endl;
    swap2(&a,&b);  
    cout << "a = " << a << ", b = "  
    << b << endl;
    swap3(a,b);  
    cout << "a = " << a << ", b = "  
    << b << endl;
    return 0;  
}  
void swap(int x, int y)  
{  
     int t = x;  
     x = y;  
     y = t;  
} 
void swap2(int *x,int *y)  
{  
     int t = *x;  
     *x = *y;  
     *y = t;  
} 
void swap3(int &x,int &y)  
{  
     int t = x;  
     x = y;  
     y = t;  
>>>>>>> d2fe550792cde210ebdfcd632b4e714bc7ffad29
} 