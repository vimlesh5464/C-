#include <iostream>
using namespace std;

int main() {
    float pencil, pen, eraser;
    cout<<"pencil"<< endl<<"pen"<<endl<<"eraser"<<endl;
    
    cin >> pencil >> pen >> eraser;
    
    float item = pencil + pen + eraser;
    
    float gst = (18.0 / 100) * item + item;  

    cout << "Total Cost (Without GST): " << item << endl;
    cout << "Total Cost (With 18% GST): " << gst << endl;
    
    return 0;
}
