// Etinosa Matthew Ikponmwosa
// Question 1
#include <iostream>

using namespace std;
//Find Area and Circumference of a Circle
int main()
{
    float d;
    float Pi=3.14159;
    cout << "Input the Diameter" << endl;
    cin>>d;

   float Area;
   float Circumference;
    Area = Pi*((d/2)*(d/2));
    Circumference = Pi*d;
    cout << "Area of Circle is\n" <<Area<<endl;
    cout << "Circumference of Circle is\n" <<Circumference<<endl;

    return 0;
}
